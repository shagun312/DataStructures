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
int max(struct array a)
{
   int max = a.A[0];
    for(int i=0; i<a.length;i++)
    {
        if(max<a.A[i])
        {
            max = a.A[i];
        }
    }
    return max;
}
int min(struct array a)
{
   int min = a.A[0];
    for(int i=0; i<a.length;i++)
    {
        if(min>a.A[i])
        {
            min = a.A[i];
        }
    }
    return min;
}
int main()
{
    struct array a ={{12,32,45,100,2},10,5};
    display(a);
    cout<<"The maximum element in array is: "<<max(a)<<endl;
    cout<<"The minimum element in array is: "<<min(a);
}

