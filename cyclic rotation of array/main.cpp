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
    int temp=a[n-1];

    for(int i=n-1,j=n-2;j>=0;i--,j--)
    {
        swap(a[j],a[i]);

    }
    a[0]=temp;
    for (int i = 0; i < n; i++) {
        cout<<a[i];
    }
    return 0;
}
