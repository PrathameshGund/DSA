#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int i;
    char A[]={"WELCOME"};
    for(i=0;A[i]!=0;i++)
    {
        A[i]=A[i]+32;
        cout<<A[i];
    }
    return 0;
}
