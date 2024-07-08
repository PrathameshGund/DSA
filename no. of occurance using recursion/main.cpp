#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++)
    {

        hash[arr[i]]+=1;

    }

    int q;
    cout<<"Enter the no. of test case:";
    cin>>q;
    while(q--)
    {
        int number;
        cout<<"Enter the number to find:";
        cin>>number;
        cout<<number<<" "<<"has occured ->"<<hash[number]<<endl;
    }
    return 0;
}
