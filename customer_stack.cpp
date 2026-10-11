//Write a C++ program to store 5 cancelled order numbers in a stack and display the cancelled 
//order starting from the most recently cancelled orders (LIFO)
#include <iostream>
using namespace std;
int main()
{
    int stack[5];
    int top=-1;
    cout << "Enter cancelled order numbers of 5 customers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> stack[++top];
    }
    cout << "Displaying cancelled order numbers starting from the most recently cancelled orders:" << endl;
    while (top>=0)
    {
        cout << stack[top--] << endl;
    }
}
    

    
