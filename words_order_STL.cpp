//Placing words in length wise and Dictionary order
#include<iostream>
#include<algorithm>
using namespace std;
bool stringcompare(string  s1,string  s2)
{
    if(s1.length()!=s2.length())
    {
        return s1.length()>s2.length();
    }
    else
    {
        return s1<s2;
    }
}
int main()
{
    string str[]={"Grandfather","Grandmother","Father","Mother","Boy","Girl"};
    int n=sizeof(str)/sizeof(str[0]);
    sort (str,str+n,stringcompare);
    for(auto a:str)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
