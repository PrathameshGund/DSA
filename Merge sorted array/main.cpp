#include <iostream>

using namespace std;

int main()
{
    int a[6]={1,2,3,0,0,0};
    int b[3]={2,5,6};


    for(int i=0;i<6;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i]==0)
            {
                swap(a[i],b[j]);
            }
            else if(a[i]>b[j]&& a[i]!=0)
            {
                swap(a[i],b[j]);
            }

        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<a[i];
    }
    return 0;
}
