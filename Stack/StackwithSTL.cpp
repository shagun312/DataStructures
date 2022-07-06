#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(12);
    s.pop();
    cout<<"The top element of stack is : "<<s.top()<<endl;
    if(s.empty()==true)
    {
        cout<<"Stack is empty.";
    }
    else{
        cout<<"Stack is not empty.";
    }
    cout<<"The size of stack is"<<s.size();

}