#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int vcount=0;
    int consonent=0;
    int i;
    char A[]="How are you";

    for(i=0;A[i]!='\0';i++)
    {
        if (A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
        {
             vcount++;
        }
        else{
                consonent++;
        }

    }
    cout<<"Vowels:"<<vcount<<endl;
        cout<<"Consonent:"<<consonent<<endl;
    return 0;
}
