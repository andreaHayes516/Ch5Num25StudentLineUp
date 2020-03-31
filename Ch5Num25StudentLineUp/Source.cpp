/************************************************
** Author: Andrea Hayes
** Date: March 31, 2020
** Purpose: Get names from file and alphabitze 
** Input: File, names
** Processing: Input file and alphabitize
** Output: Names from file in alphabetical order
*************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
int main() {

    ifstream inputFile;
    string temp, names[8];
    inputFile.open("C:/Users/Andrea Hayes/source/repos/Ch5Num25StudentLineUp/LineUp.txt"); // Open file

    if (!inputFile) // If file does not open
    {
        cout << "Could not open file.";
        return 1;
    }

    for (int i = 0; i < 8; i++) //  Inputs file into names
    {
        inputFile >> names[i];
    }

    /*for (int i = 0; i < 8; i++)  // Test to make sure pulling from file correctly. 
    {
        cout << "The " <<  i << " name is " << names[i] << endl;
    }*/

    for (int i = 0; i < 8; i++) // Bubble sort // Go over entire list
    {
        for (int j = i + 1; j < 8; j++) // Compare each name to those further down the list
        {
            if (names[j] < names[i])  // If name is less than swap 
            {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    for (int i = 0; i < 8; i++) // Loop for Output
    {
        cout << names[i];
        cout << endl;
    }
    inputFile.close(); // Close file
        
    return 0;
}