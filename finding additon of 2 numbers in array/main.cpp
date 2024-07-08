#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of element in array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cout<<"Enter the sum :";
    cin>>k;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
        {
            cout<<a[i]<<"+"<<a[j]<<"="<<k<<endl;
        }
        }

    }
    return 0;
}
