#include<iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array a)
{
    for(int i=0;i<a.length;i++)
    {
        cout<<a.A[i]<<" ";
    }
    cout<<endl;
}
int get(struct array a, int index)
{
    if(index>=0 && index<a.length)
    {
        return a.A[index];
    }
}
void set(struct array *a, int index, int x)
{
    if(index>=0 && index<a->length)
    {
        a->A[index] = x;
    }
}
int sum(struct array a)
{
    int sum =0;
    for(int i=0; i<a.length; i++)
    {
        sum= sum+a.A[i];
    }
    return sum;
}
float avg(struct array a)
{
    return (float)sum(a)/a.length;
}

int main()
{
    struct array A ={{23,12,32,62,5},10,5};
    cout<<"array Initially: ";
    display(A);
    cout<<"Get element at index 2: "<<get(A,2)<<endl;
    cout<<"set 15 at 3: ";
    set(&A, 3, 15);
    display(A);
    cout<<"Sum of array elements: "<<sum(A)<<endl;
    cout<<"Average of array elements: "<<avg(A);
}

