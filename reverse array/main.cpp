#include <iostream>

using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    cout<<"elements are";
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i];
}

void reverse(struct array *arr)
{
    int i,j;
    for(i=0,j=arr.length-1;i<j;i++,j--)
    {
        swap(arr.A[i],arr.A[j]);
    }
}

int main()
{
    struct array arr={10,2,4,5,{6,63,2,25}};
   reverse(arr);
   display(arr);
   return 0;
}
