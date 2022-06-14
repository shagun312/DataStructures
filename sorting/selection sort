#include<iostream>
using namespace std;
int IndexMinimum(int a[],int s,int n)
{
    int Minvalue = a[s];
    int Minindex = s;
    for(int i =Minindex+1; i<n; i++)
    {
        if(a[i]<Minvalue)
        {
            Minindex = i;
            Minvalue = a[i];
        }
    }
    return Minindex;
}
void SelectionSort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int index = IndexMinimum(a,i,n);
        int temp;
        temp = a[i];
        a[i]=a[index];
        a[index]=temp;
        cout<<"Array updation after step"<<i+1<<endl;
        for(j=0;j<n;j++)
    {
        cout<<a[j]<<" ";

    }
    cout<<endl;
        
    }
    cout<<"The sorted array: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    
}
int main()
{
    int n=5;
    int a[5]={4,7,2,10,1};
    SelectionSort(a,5);
}
