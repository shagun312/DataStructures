#include<iostream>
#include<string.h>
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

bool isBalanced(char* exp)
{
    stack s((int)strlen(exp));
    for(int i=0; i<strlen(exp); i++)
    {
        if(exp[i]=='(')
        {
            s.push(exp[i]);
        }
        else if(exp[i] == ')')
        {
            if(s.isEmpty())
            {
                return false;
            }
            else 
            {
                s.pop();
            }
        }
    }
    return s.isEmpty()?true : false;
}

int main()
{
    char E[]="((A+B)*(C+D))";
    cout<<isBalanced(E)<<endl;
    char B[]="(B*(C+D)";
    cout<<isBalanced(B);
}