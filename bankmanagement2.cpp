//Write a c++ prgram to store recently stored 5 customer token numbers in a stack and and display
//the service history of the most recently served customer
#include <iostream>
using namespace std;
int main()
{
    int stack[5];
    int top=-1;
    cout << "Enter 5 customer token numbers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> stack[++top];
    }
    cout << "Service history:" << endl;
    while (top>=0)
    {
        cout << "Customer with token number: " << stack[top--] << endl;
    }
    return 0;
}
