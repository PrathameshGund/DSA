#include <iostream>

using namespace std;



char reverseS(char a[],int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        swap(a[i],a[j]);
    }
}
cout<<char a[];
int main()
{
    int size=5;
   char a[5] ={'h','e','l','l','o'};
   reverseS(a,size);

    cout<<ans;

}

