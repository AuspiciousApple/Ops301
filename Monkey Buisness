/* 
------------------------------------------------------------------------
Comments
This Program Will Allow a local zoo to track the amount of food eaten by 3 monkeys
The program will request the user to input the information on a daily basis
The progam will display the results in a 3 x 7 array.

*/


#include <iostream>             // for cin(>>), cout (<<), endl(new line)
#include <iomanip>              // for basic in, out, manipulation
#include <string>               // for various string operations
#include <fstream>              // for file input and output 
#include <cmath>                // for more advanced math calculations
#include <cctype>               // for charecter manipulation


using namespace std;            // std:: prefix to all code that requires it

//Prototype declaration for functions
float getFloatData(string);
void projectHeader();
void projectFooter();
void getFood(float [][7]);
void displayData(float [][7]);
void foodCalc (float [][7]);

//Start of main function
int main()

{
    projectHeader(); //Calling the function
    //Variable declaration
    float monkeyTable[3][7]; //Monkey table array
    getFood(monkeyTable); //Calling the function
    cout <<endl;
    displayData(monkeyTable); //Calling the function
    cout << endl;
    foodCalc(monkeyTable);// calling the function

    projectFooter(); //Calling the function

}// End of main

void foodCalc (float monkeyTable[][7]) // function to calculate the average food eaten by the monkeys
{
    // variable declaration
    float sumFood = 0;
    float avgFood;
    float mostFood = monkeyTable[0][0];
    float leastFood = monkeyTable[0][0];

     for (int col = 0; col < 7; col ++)// for loop to iterate over the 7 colums
    {
        for (int row = 0; row < 3; row ++) // for loop to itereate ovver the 3 rows
        {
            if (monkeyTable[row][col] > mostFood) // if conditional to store running greates value
            {
                mostFood = monkeyTable[row][col];

            }
            if (monkeyTable[row][col]  < leastFood) // if conditional to store running lowest value
            {
                leastFood = monkeyTable[row][col];
            }

            sumFood = sumFood + monkeyTable[row][col]; // calcualtion of the total 
        }
    }
    avgFood =  sumFood /21;
    cout << "Avg food is : " <<  avgFood << endl; // displaying avg food
    cout << "Most food is : " <<  mostFood << endl; // displaying most food
    cout << "Least food is : " << leastFood << endl; // displaying least food

}// end of function 
void displayData(float monkeyTable[][7])//Display data funcion displays all the inforamtion
{

    cout << endl;
    cout << " ----------------------------------------------------------" << endl;
    cout << " Summary of Weekly Monkey Intake: " << endl;
    cout << " ----------------------------------------------------------" << endl;
    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"}; //string week array
    cout << setw(5) << left << "Monkey   ";// mokey colum
    for (int ctr = 0; ctr < 7; ctr++)// for loop populates the first row
    {
        cout << setw(5) << left << week[ctr]; // populates the day of the week
    }// end of loop
    cout << endl;


    cout << setw(5) << left << "   1     " << setw(5); // first row of the food array
    for (int ctr = 0; ctr < 7; ctr++)//for loop for the first row
    {
        cout << setw(5) << left << monkeyTable[0][ctr]; // displays the data
    }
    cout << endl;
    
    cout << setw(5) << left << "   2     " << setw(5); // second row of the food array
    for (int ctr = 0; ctr < 7; ctr++)// for loop for the esecond row
    {
        cout << setw(5) << left << monkeyTable[1][ctr]; // displays the data
    }
    cout << endl;

    cout << setw(5) << left << "   3     " << setw(5); // thrid row of the food array
    for (int ctr = 0; ctr < 7; ctr++)// for loop for the third row
    {
        cout << setw(5) << left << monkeyTable[2][ctr]; //displays the data
    }
    cout << endl;


}// end of the function
void getFood(float monkeyTable[][7])// function receires the value of the food eaten by monkeys
{
    for (int ctr = 0; ctr < 7; ctr++) // for loop to store the first row of the array
    {
       monkeyTable[0][ctr] = getFloatData("Enter the amount of food for Monkey 1 Day " + to_string(ctr +1) + ": ");
    }
    for (int ctr = 0; ctr < 7; ctr++)// for loop to store the secon d orw of the aray 
    {
        monkeyTable[1][ctr] = getFloatData("Enter the amount of food for Monkey 2 Day " + to_string(ctr +1) + ": ");
    }
      for (int ctr = 0; ctr < 7; ctr++) // foor loop to store the third row of the aray 
    {
        monkeyTable[2][ctr] = getFloatData("Enter the amount of food for Monkey 3 Day " + to_string(ctr +1) + ": ");
    }

}// ebd if get foood function
float getFloatData(string prompt) // get float data function
{
	float value;
	
	 while (true)
    {
        cout << prompt;
	    while (!(cin >> value))
		{
			 cout << "\t ERR!! Entered value needs to be an integer" << endl;
			 cin.clear();
			 cin.ignore(120, '\n');

		}
		return value;
	}

} // end of getFloatDAta()
void projectHeader() // projectHeader function (function displays the header)
{
  cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "\tZOO - Monkey Food Tracker:" << endl;
  cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << endl;
} // End of function projectHeader
void projectFooter() // projectFooter function (function displays the footer)
{
  cout << endl;
  cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
  cout << "\tEnd of Information:" << endl;
  cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
} // End of function projectFooter
