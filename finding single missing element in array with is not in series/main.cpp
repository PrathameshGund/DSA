#include<iostream>

using namespace std;

int  main()
{
    //array creation
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the Elements of array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //searching and finding element
    int l,h,diff;
    l=a[0];
    h=a[n-1];

    //cout<<l<<endl<<h<<endl;
    diff=l-0;
    for(int i=1;i<n;i++)
    {
        if(a[i]-i!=diff)
        {
        cout<<i+diff<<endl;
        break;
        }
    }
}

