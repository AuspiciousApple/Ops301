#include <iostream>             // for cin(>>), cout (<<), endl(new line)
#include <iomanip>              // for basic in, out, manipulation
#include <string>               // for various string operations
#include <fstream>              // for file input and output 
#include <cmath>                // for more advanced math calculations
#include <cctype>               // for charecter manipulation


using namespace std;


const int arraySize = 15; // making an arrray of size 15
int weight[] = {1, 2, 3, 5, 7, 10, 13, 16, 20, 25, 30, 35, 40, 45, 50}; // defining the weight values in an array of sized 15
double shippingCharge[] = {1.50, 2.10, 4.00, 6.75, 9.90, 14.95, 19.40, 24.20, 27.30, 31.90, 38.50, 43.50, 44.80, 47.40, 55.20};
// defining the cost per weight in an array  of size 15

// struct transaction with 2 string, an int, and double elements
struct Transaction {
    string location;
    string status;
    int weight;
    double cost;
};


// Prototype declaration of functions
int determineShippingCharge(int);
char getCharData(string);
float getFloatData(string);
Transaction createTransaction(char, double, double, double, double);
void printTransaction(const Transaction &, int);
void printSummary(int, int, double);
void projectHeader();

int main() {
    projectHeader(); // calling the funciton
    
    Transaction transactions[100]; // defininig transactions array with the transaction struct
    
    //declaration of variables
    int acceptedCount = 0;
    int rejectedCount = 0;
    double totalCost = 0.0;
    int transactionCount = 0;
    

    // do looop 
    do 
    {
        cout << "\nMenu" << endl;// 
        char choice = getCharData("Enter Location - (T)exas; (O)ut of state; (F)oreign (X)it: "); // calling the fucnction
        if (choice == 'X') // condition to end the program
            break;
        
        transactionCount++; // adding one to thte transacion count
        float packageWeight = getFloatData("Enter Weight (Lbs): ");// getting weight value
        float side1 = getFloatData("Enter Dimension 1 (Inches): ");// getting side one
        float side2 = getFloatData("Enter Dimension 2 (Inches): ");// getting side 2
        float side3 = getFloatData("Enter Dimension 3 (Inches): ");// getting side three
    

        // transactioncount object created and stored to the transactions array and set equal to the function create transaction
        transactions[transactionCount] = createTransaction(choice, packageWeight, side1, side2, side3);
        printTransaction(transactions[transactionCount], transactionCount); // calling the function with given argumenst
        
        if (transactions[transactionCount].status == "Accepted") { // condition for accpeted count
            acceptedCount++;
            totalCost += transactions[transactionCount].cost; // adding the transsaction to the total
        } else {
            rejectedCount++; // adding to the rejedct count 
        }
        
    } while (true); /// while condition for do loop
    
    printSummary(acceptedCount, rejectedCount, totalCost); // displaying the summary 
    
    cout << "End of Project 4" << endl; /// end of project 
    
}// end of main

// funciton used to search the arrray
int determineShippingCharge(int packageWeight) {
    int index = 0;
    
    for (int ctr = 0; ctr < arraySize; ctr++) {
        if (weight[ctr] >= packageWeight) {
            index = ctr;
            break;
        }
    }
    
 return shippingCharge[index]; //brings back the value for the cost given weight
} // end of funciton
// funciton used ot get char data
char getCharData(string prompt)
{
char cmd;

while (true)
{
    cout << prompt;
    cin >> cmd;

    cmd = toupper(cmd); // cappitalizing everything returend

        if (cmd == 'T' || cmd == 'O' || cmd == 'F' || cmd == 'X') // only returning thsese inputs from the function
		{
		    return cmd;
		}

	cout << "Wrong entry" << endl;


}// end of while(true)

}// end of char geetCharData(string prompt)
// fucntion used to get float data
float getFloatData(string prompt)
{
    float value;

    while (true)
    {
        cout << prompt;

        while (!(cin >> value))
        {
            cout << "\tERROR MESSAGE!!!: Non number entered. \n" + prompt;
            cin.clear();
            cin.ignore(120, '\n');
        }

        if (value >= 0 && value <= 100)
        {
            return value;
        }
        else
        {
            cout << "\tERROR MESSAGE!!!: VALUE MUST BE BETWEEN 0 and 100. \n";
        }
    }
}
// function used to calculate data and process user input 
Transaction createTransaction(char choice, double weight, double side1, double side2, double side3) {
    Transaction transaction; // transaction object 
    transaction.weight = weight; 
    transaction.cost = determineShippingCharge(weight); // calling the function to find the weight cost
    
    if (choice == 'T' || choice == 't') // setting the condition for given input
        transaction.location = "Texas";
    else if (choice == 'O' || choice == 'o')
    {
        transaction.cost = 35 + transaction.cost; // addig the out of state cost
        transaction.location = "Out of state";
    }
    else if (choice == 'F' || choice == 'f') 
    {
        transaction.location = "Foreign";
        transaction.cost = 40 + transaction.cost; /// adding the foreing fee
    }
    
    if (weight <= 50 && side1 <= 24 && side2 <= 40 && side3 <= 20) // setting limits on the weight and girth
        transaction.status = "Accepted";
    else
        transaction.status = "Rejected";
    
    return transaction;
}// end of function
// funciton used to prin user tarnsaction information
void printTransaction(const Transaction &transaction, int transactionCount) 
{
    cout << "\nTransaction #" << transactionCount<< endl;
    cout << "-------------------------" << endl;
    cout << "Location: " << transaction.location << endl;
    cout << "Status: " << transaction.status << endl;
    cout << "Weight: " << transaction.weight << " lbs." << endl;
    
    if (transaction.status == "Accepted") 
    {
        cout << "Cost: $" << fixed << setprecision(2) << transaction.cost << endl;
    } 
    else
    {
        cout << "Cost: N/A" << endl;
    }
}
// function prints to the screen the summary of the transaction
void printSummary(int acceptedCount, int rejectedCount, double totalCost) {
    cout << "\nSummary: Shipping" << endl;
    cout << "-------------------------" << endl;
    cout << "Number of accepted packages: " << acceptedCount << endl;
    cout << "Number of rejected packages: " << rejectedCount << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << totalCost << endl;
}
// This function will display the start of the project with necessary information about the project
void projectHeader()
{
    cout << "******************************************" << endl;
    cout << "Welcome to FED-AX Shipping Services\n";
    cout << "******************************************" << endl;
} // end of projectHeader()
