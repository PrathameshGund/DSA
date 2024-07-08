#include <iostream>
#include<unordered_set>
using namespace std;


int findElement(int x,unordered_set<int>s)
{
    if(s.find(x)==s.end())
    {
        cout<<"Not Found";
    }
    else{
        cout<<"Found"<<*(s.find(x))<<endl;
    }
}


int presentElement(int x,unordered_set<int>s)
{
    if(s.count(x))
    {
        cout<<"Found"<<endl;
    }
    else
        cout<<"Not Found"<<endl;
}

void deleteElement(unordered_set<int>s,int x)
{
    cout<<"size Before"<<s.size()<<endl;
    s.erase(x);
    cout<<"size After"<<s.size()<<endl;

}

int main()

{
    unordered_set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);


    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";
        cout<<endl;

    }
    cout<<s.size()<<" "<<endl;
    int x;
    cout<<"Enter Number to find";
    cin>>x;
    findElement(x,s);
    presentElement(x,s);
    deleteElement(s,x);
    return 0;
}
