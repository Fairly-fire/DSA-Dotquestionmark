#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str[]={"Grandfather","Grandmother","Father","Mother","Boy","Girl"};
    int n=sizeof(str)/sizeof(str[0]);
    for(auto a:str)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    sort(str,str+n);
    for(auto a:str)
    {
        cout<<a<<" ";
    }
    cout<<endl;
}
