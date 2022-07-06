#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top;
    stack(int size)
    {
        this->size = size;
        top =-1;
        arr = new int[size];
    }
    
    void push(int element)
    {
        if(size - top >1)
        {
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }

    }

    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }

    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else 
            return false;

    }
};

int main()
{
    stack s(5);
  
    s.push(34);
    s.push(34);
    s.push(34);
    s.push(34);
    s.push(34);
    s.push(34);
    s.push(34);
    cout<<s.peek()<<endl;




}