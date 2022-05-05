#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int length;
    int size;

};
int BinarySearch(struct array a, int key,int l,int h)
{
    int mid;
    l=0;
    h=a.length-1;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a.A[mid])
        {
            return mid;
        }
        else if(key<a.A[mid])
        {
            BinarySearch(a,key, l,mid-1);
        }
        else{
            BinarySearch(a,key, mid+1,h);
        }
    }
    return -1;
}

int main()
{
struct array a1={{2,34,21,34,121},5,10};
    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;
    cout<<"\nThe key element is at index:  "<<BinarySearch(a1,key,0,4);
}