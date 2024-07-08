#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int a[n];
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
   int b[n];
   for(int i=n-1,j=0;i>=0;i--,j++)
   {
       b[j]=a[i];
   }
   for(int i=0,j=0;i<n;i++,j++)
   {
       a[i]=b[j];
   }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<endl;
   }
    return 0;
}
