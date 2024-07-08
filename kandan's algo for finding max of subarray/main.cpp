#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout << "Enter the elements for a: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum=0;
    int maxi=a[0];
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        maxi=max(maxi,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<sum<<endl;
    }

