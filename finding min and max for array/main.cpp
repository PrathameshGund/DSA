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

   int minimum=a[0];
   int maximum=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<minimum)
        {
            minimum=a[i];
        }
            else if(a[i]>maximum)
            {
                maximum=a[i];
            }
        }
        cout<<minimum<<endl<<maximum<<endl;
    }


