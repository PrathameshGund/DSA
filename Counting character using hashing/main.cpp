#include <iostream>

using namespace std;

int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {

        hash[s[i]-'a']+=1;

    }

    int q;
    cout<<"Enter the no. of test case:";
    cin>>q;
    while(q--)
    {
        char c;
        cout<<"Enter the element to find:";
        cin>>c;
        cout<<c<<" "<<"has occured ->"<<hash[c-'a']<<endl;
    }
    return 0;
}
