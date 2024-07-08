#include <iostream>

using namespace std;

int max_min(int num[],int n)
{
    int max=num[0];
    int min=num[0];

    for(int i=0;i<n;i++)
    {


    if(num[i]>max)
        {max=num[i];

        }
        else if(num[i]<min)
        {
            min=num[i];


    }    }
      cout<<max<<endl;
      cout<<min<<endl;
}
int main()
{
    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    max_min(num,size);
    return 0;
}
