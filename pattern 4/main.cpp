#include <iostream>

using namespace std;

int main()
{
   int row=1;
   int n=0;
   cout<<"Enter the number";
   cin>>n;

   while(row<=n)
   {
    int col=1;
       while(col<=row)
       {
           cout<<"*"<<" ";
            col++;
       }
       cout<<endl;
       row++;
   }

}
