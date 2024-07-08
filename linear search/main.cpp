#include<iostream>
#include<stdlib.h>

using namespace std;

struct array
{
    int A[10];
    int size;
    int length;

};
void Display(struct array arr)
{
    int i;
    cout<<"The elements of the array are:"<<endl;
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<endl;
}

int LinearSearch(struct array arr, int key)
{
    int i;
    for(i=0;i<arr.length ;i++)
    {
        if(key==arr.A[i])
        {
            swap(arr.A[i],arr.A[0]);
            return i;
        }
    }
    return -1;
}

int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    cout<<LinearSearch(arr,5)<<endl;
    Display(arr);
    return 0;
}
