#include<iostream>
#include<cstdlib>
using namespace std;

struct array
{
    int A[10];
    int length;
    int size;

};

void display(struct array a)
{
    for(int i=0; i<a.length;i++)
    {
        cout<<a.A[i]<<" ";
    }
    cout<<endl;
}

int findMissingElement(struct array a, int n)
{
    int sum, s;
    sum = n*(n+1)/2;
    for(int i=0; i<a.length; i++)
    {
        s = s+a.A[i];
    }
    if(s!=sum)
    {
        return abs(s-sum);
    }

}

int main()
{
    struct array arr = {{1,2,3,5,6},5,10};
    display(arr);
    cout<<"The missing element in array is: "<<findMissingElement(arr,6);


}