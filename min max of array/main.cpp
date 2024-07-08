#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    cout<<"Enter the elements of array:";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maximum=a[0];int minimum=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<minimum)
        {
            minimum=a[i];
        }
        else if(a[i]>maximum)
        {
            maximum=a[i];
        }s

    }
    cout<<minimum<<endl<<maximum<<endl;
}
