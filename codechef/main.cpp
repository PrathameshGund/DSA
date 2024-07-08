#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for( i=0;i>n;i++)
        {
            cin>>arr[i];
        }

        if(arr[i]<arr[i+1])
        {
            cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
	return 0;
}
}
