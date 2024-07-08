#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the elements:";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        if(k==(i+1)){
        cout<<a[i];
    }
    }
    return 0;
}
