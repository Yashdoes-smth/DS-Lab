//Write a C++ program to store marks of 5 students in an array and arrange the marks in
//Descending order to display the student from highest marks to lowest marks 
#include <iostream>
using namespace std;
int main()
{
    int marks[5];
    cout << "Enter marks of 5 students:" << endl;
    for (int i =0;i<5;i++)
    {
        cout << "Marks of Student " << (i + 1) << ": ";
        cin >> marks[i];
    }
    //Sorting the array in descending order
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (marks[i] < marks[j])
            {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    cout << "Marks of students in descending order:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << (i + 1) << ": " << marks[i] << endl;
    }
    return 0;
}
