#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int count=1;
        if(a[i]!=-1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                count++;
                a[j]=-1;
                }
            }
        }
    if(count>1)
    {
        cout<<a[i]<<" is repeated by"<<endl<<count<<endl;
    }
    }
    return 0;
}
