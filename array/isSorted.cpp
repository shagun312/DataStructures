#include<iostream>
using namespace std;

struct array
{
    int a[10];
    int length;
    int size;

};

void display(struct array A)
{
    for(int i=0; i<A.length;i++)
    {
        cout<<A.a[i]<<" ";
    }
    cout<<endl;
}

int ifSorted(struct array A)
{
    for(int i=0; i<A.length-1;i++)
    {
        if(A.a[i]>A.a[i+1])
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
struct array arr = {{1,12,34,56,200},5,10};
cout<<ifSorted(arr)<<endl;
display(arr);
}