#include<iostream>
#include<stdlib.h>


using namespace std;

int main()
{
    int i;
    //input for length of the string
    char A[x];
    cout<<"Enter size of the string";
    cin>>x;
    //character inputs
    cout<<"Enter the string";
    cin>>A[x];

    for(i=0;A[x]!='\0';i++)
    {
        if (A[x]>90)
        {
            A[x]=A[x]+32;
        }
        else {
            A[x]=A[x]-32;
        }
    cout<<A[x];
    }
    return 0;
}
