#include <iostream>

using namespace std;

int main()
{
    int a[5]={3,2,2,3};
    int b[5]={0};
    int key=2;


    for(int i=0,j=0;i<5;i++,j++)
    {
        if(a[i]!=key)
        {
            b[j]=a[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<b[i];
    }


    return 0;
}
