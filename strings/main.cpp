#include <iostream>

using namespace std;


char reverseString(char a[],int size)
{
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        swap(a[i],a[j]);
    }
return 0;
}
char reverseCopy(char a[],char b[],int size)
{
    for(int i=size-1,j=0;i>=0,j<size;i--,j++)
    {
        b[j]=a[i];
    }
}

char isPallindrome(char a[],int size)
{
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        if(a[i]==a[j])
        {
            return 1;
        }
        else
        {
            return 0;
            break;
        }

    }


}

char lowercase(char a)
{
    a=a+32;

    cout<<a<<endl;
}


int main() {

    char a[4];
    cin>>a;
 int size=4;

    //reverseString(a,size);
//int ans=isPallindrome(a,size);
    //reverseCopy(a,b,size);
for(int i=0;i<size;i++)
{
    if(a[i]>=65 &&a[i]<=92)
    {
        a[i]= a[i]+32;
    }
}


    cout<<a<<endl;
    return 0;


}

