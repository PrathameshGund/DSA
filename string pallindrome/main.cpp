#include<iostream>
#include<stdlib.h>

using namespace std ;

int main()
{
    int i,j;
    char  A[10]="Halla";
    char  B[10];
    for(i=0;A[i]!='\0';i++)
    {}
    i=i-1;
    for(j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    B[j]='\0';
    i=0,j=0;
    if(A[i]=B[j])
    {
        cout<<"Its a pallindrome";
    }
    else{
        cout<<"Its not a pallindrome";
    return 0;
    }
}
