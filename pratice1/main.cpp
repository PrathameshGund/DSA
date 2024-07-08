#include<iostream>

using namespace std;


void insert(int arr[],int size)
{
    int length=0;
    cout<<"Enter "<<size <<" elements of the array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        length++;
    }
    cout<<length<<endl;
    }

void delete_index(int arr[],int index,int &size)
{
    if (index>=0 && index<size)
    {
        for(int i=index;i<size-1;i++)
            {
                arr[i]=arr[i+1];
            }

    }
    size--;

}

void display(int arr[],int size)
{

    cout<<"The array contains elements:";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}


void linearsearch(int arr[],int &size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            cout<<"Key is found at"<<" "<<i;
        }

    }

}

int binarysearch(int arr[], int &size, int key) {
    int l, h, mid;
    l = 0;
    h = size - 1;

    while (l <= h) {
        mid = l + (h - l) / 2;

        if (key == arr[mid]) {
            return mid;  // Key found, return the index
        } else if (key < arr[mid]) {
            h = mid - 1;  // Search in the left half
        } else {
            l = mid + 1;  // Search in the right half
        }
    }

    return -1;  // Key not found
}




int main()
{
    int n,i;
    cout<<"Enter the size of array:";
    cin>>n;
    int *arr=new int[n];

   insert(arr,n);
  // display(arr,n);
  //  delete_index(arr,2,n);
   //display(arr,n);
   //linearsearch(arr,n,3);
    binarysearch(arr,n,3);
    return 0;
}
