#include <iostream>
#include<map>
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

    map<int,int >mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cout<<"Enter the no. of test case:";
    cin>>q;
    while(q--)
    {
        int number;
        cout<<"Enter the number to find:";
        cin>>number;
        cout<<number<<" "<<"has occured ->"<<mpp[number]<<endl;
    }
    return 0;
}
