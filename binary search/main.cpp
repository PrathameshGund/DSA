#include<iostream>
#include<stdlib.h>

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
    cout<<"Elements are :";
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<endl;
}

int binarySearch(struct array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int main()
{
    struct array arr={{2,3,9,16,18,21,28,32,35},10,9};
    cout<<binarySearch(arr,35)<<endl;
    display(arr);
    return 0;
 }
