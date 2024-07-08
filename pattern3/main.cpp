#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int n=0;
    cout<<"Enter the number";
    cin>>n;
    int count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
