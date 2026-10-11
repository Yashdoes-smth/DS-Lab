//Write a c++ prgram for a simple bank token system that allows the user it issue a token,
//display all tokens, serve a customer and exit the program
#include <iostream>
using namespace std;
int main()
{
    int queue[5];
    int f=0,r=0;
    int choice;
    do
    {
        cout << "Bank Token System Menu:" << endl;
        cout << "1. Issue Token" << endl;
        cout << "2. Display All Tokens" << endl;
        cout << "3. Serve Customer" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            if (r < 5)
            {
                cout << "Enter token number: ";
                cin >> queue[r];
                r++;
                cout << "Token issued successfully." << endl;
            }
            else
            {
                cout << "Token limit reached. Cannot issue more tokens." << endl;
            }
        }
        else if (choice == 2)
        {
            if (f == r)
            {
                cout << "No tokens to display." << endl;
            }
            else
            {
                cout << "Displaying tokens:" << endl;
                for (int i = f; i < r; i++)
                {
                    cout << queue[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            if (f < r)
            {
                cout << "Serving customer "  << endl;
                f++;
            }
            else
            {
                cout << "No customers to serve." << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "Exiting the program." << endl;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    return 0;
    }
    while (choice != 4);
    
}
