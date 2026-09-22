//Write a C++ program to store the IDs of 5 libraby books in an array and arrange the book IDs in ascending order using simple sorting technique 
#include <iostream>
using namespace std;

int main()
{
    int book[5];
    cout<<"Enter 5 Book IDs: " << endl;
    for (int i=0; i<5; i++)
    {
        cin >> book[i];
    }
    //For Bubble Sorting 
    for (int j=0; j<5; j++)
    {
        for (int i=0; i<5; i++)
        {
            if (book[i] > book[i+1])
            {
                int t = book[i];
                book[i] = book[i+1];
                book[i+1] = t;
            }
        }
    
    }
    cout << "Book IDs in Ascending Order: " << endl;
    for (int i=0; i<5; i++)
    {
        cout << book[i] << endl;
    }
}
