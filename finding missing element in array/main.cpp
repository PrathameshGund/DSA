#include <iostream>

using namespace std;

int main()
{
    int A[10]={1,2,3,4,6,7,8,9};
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+A[i];
    }
    int s=(9*(9+1))/2;
    cout<<s-sum<<endl;



    return 0;
}
