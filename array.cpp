#include<iostream>
#include<stdlib.h>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    cout<<"elements are"<<endl;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl;
    }
}
int main()
{
    struct Array arr;
    int n,i;
    cout<<"Enter the size of the array";
    cin>>arr.size;
    arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;
    cout<<"enter number of numbers"<<endl;
    cin>>n;
    cout<<"enter all elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length=n;
    display(arr);
}
