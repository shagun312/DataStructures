#include<iostream>
using namespace std;

struct array{
    int A[10];
    int length;
    int size;
};

void display(struct array a){
    for(int i=0; i<a.length;i++)
    {
        cout<<a.A[i]<<" ";
    }
}

int linearSearch(struct array *a, int key)
{
    for(int i =0; i<a->length;i++)
    {
        if (a->A[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    struct array a1 = {{2,3,12,34,5}, 5, 10};
    cout<<"The searched element is found at the position: "<<linearSearch(&a1,12);
    return 0;
    
}