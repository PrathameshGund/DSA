#include <iostream>

using namespace std;

int main()
{

    string s1,s2;
    cout<<"Enter the string s1:";
    cin>>s1;
    cout<<"Enter the string s2:";
    cin>>s2;

    int l1=s1.length();
    int l2=s2.length();

    if(l1!=l2)
    {
        cout<<"no"<<endl;
    }
    else{
        string temp=s1+s1;

    if(temp.find(s2)!=string::npos)
    {
        cout<<"yes"<<endl;
    }
    else{

    cout<<"no"<<endl;}
    }
}

