#include<iostream>

using namespace std;

int main()
{
    int i=1;
    int n;
    cin>>n;
    int count=1;
    while(i<=n)
    {
        int j=1;
        int value=i;
        while(j<=i)
        {
            char ch='A'+i-1;
             cout<<ch;
             j++;
             value++;
        }
        cout<<endl;
        i++;
    }
}
