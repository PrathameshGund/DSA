#include<iostream>

using namespace std;

int main()
{
    //array creation
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the Elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //searching and finding element
    int l = a[0];
    int h = a[n-1];
    int diff = l-0;  // Initialize diff with the first element

    for(int i = 0; i < n; i++)
    {
        if (a[i] - i != diff)
        {
            while (diff < a[i] - i)
            {
                cout << i + diff << endl;
                diff++;
            }
        }
    }

    return 0;
}
