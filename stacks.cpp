#include <iostream>
#define MAX 100
using namespace std;
class ArrayStack
{
    int arr[MAX];
    int top=-1;

public:
    bool isEmpty()
    {
        return top==-1;
    }
    bool isFull()
    {
        return top==MAX-1;
    }
    void push(int x)
    {
        if(isFull())
        {
            cout<<"Overflow"<<endl;
            return;
        }
        arr[++top]=x;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Underflow"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peak()
    {
        return arr[top];
    }
};
int main()
{
    ArrayStack s;
    cout<<"Pushing 1,2,3,4,5 into stack"<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Top element is: "<<s.peak()<<endl;
    
}
