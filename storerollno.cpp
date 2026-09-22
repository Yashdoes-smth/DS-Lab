//Write a C++ program to store roll numbers of 5 students in an array and search for a given roll number 
//Display student found if present otherwise studernt not found
#include <iostream>
using namespace std;
int main()
{
    int rollNumber[5];
    cout << "Enter roll numbers of 5 students:" << endl;
    for (int i =0;i<5;i++)
    {
        cout << "Roll Number " << (i + 1) << ": ";
        cin >> rollNumber[i];
    }
    int searchRollNumber;
    cout << "Enter roll number to search: ";
    cin >> searchRollNumber;
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        if (rollNumber[i] == searchRollNumber)
        {
            found = true;
            break;
        }
    }
    if (found==true)
    {
        cout << "Student found." << endl;
    }
    else
    {
        cout << "Student not found." << endl;
    }
    return 0;
}
