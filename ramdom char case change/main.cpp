#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i;
    //input for length of the string
    char A[]="WelCOme";

    for(i=0;A[i]!='\0';i++)
    {
        if (A[i]>=65&&A[i]<=90 )
        {
            A[i]=A[i]+32;
        }
        else if(A[i]>='a'&&A[i]<=120)

            {
            A[i]=A[i];
        }
    cout<<A[i];
    }
    return 0;
}
