#include <iostream>
#include<unordered_map>
using namespace std;


int findElement(unordered_map<string,int>m)
{
    if(m.find("ide")!=m.end())
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}
int main()
{
    unordered_map<string,int>m;
    m["gfg"]=20;
    m["ide"]=30;

    m.insert({"courses",15});

    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    findElement(m);
    return 0;
}
