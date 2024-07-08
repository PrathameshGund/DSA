#include <iostream>

using namespace std;

int factorial(int n)
{
    //base condition
    if(n==0)
        return 1;

    int fact2=factorial(n-1);
int     fact=n*fact2;

    return fact;
}

int main() {
    int n = 10;


     int ans =factorial(n);

cout<<ans<<endl;

}
