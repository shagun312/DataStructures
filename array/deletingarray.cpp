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
}

void Delete(struct array *a, int index)
{
    if (index>=0 && index<a->size)
        for(int i =index; i<a->length;i++)
        {
            a->A[i]=a->A[i+1];
        }
        a->length--;
}

int main()
{
    struct array a1 = {{2,3,4,12,45,3},6,10};
    cout<<"Array Initially: ";
    display(a1);
    cout<<"\nAfter Deletion from index 3: ";
    Delete(&a1, 3);
    display(a1);
}
