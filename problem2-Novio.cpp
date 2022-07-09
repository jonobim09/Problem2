/******************************************************************************
Problem 02
Programmed by: Jolly Novino
Date Accomplished: 07/09/2022

//This program counts number of bombs or scan the area if safe.

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    fstream iFile;
    iFile.open("jolly.txt", ios::in);
    if (!iFile)
    {
        cout << "File not created!";
        return 0;
    }

    int bombsFound = 0;
    char foundItem;


    while (1) {
        iFile >> foundItem; 
        if (iFile.eof()) {
            break;
        }

        if (foundItem == '*') {
            bombsFound++;
        }
    }

    if (bombsFound > 0) {
        cout << bombsFound << " Bomb Found!" << endl;
        return 0;
    }

    cout << "SAFE" << endl;
  
    iFile.close();

    return 0;
}