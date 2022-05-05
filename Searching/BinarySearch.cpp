#include<iostream>
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

int BinarySearch(struct array a, int key)
{
    int l,mid,h;
    l=0;
    h=a.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a.A[mid])
        {
            return mid;
        }
        else if(key<a.A[mid])
        {
            h = mid-1;
        }
        else{
            l=mid+1;
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
    cout<<"\nThe key element is at index:  "<<BinarySearch(a1,key);
}