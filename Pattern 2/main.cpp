#include<iostream>

using namespace std;

int main()
{
    int i=0;
    int n=0;
    cout<<"Enter the number";
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
    {
        int p=n-j+1;
        cout<<p<<" ";
        j++;
    }
    cout<<endl;
    i++;
    }
}
