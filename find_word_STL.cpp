#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str="hello world show me the text and also print these words text text text";
    string somya="text";
    //cout<<string::npos;
    size_t index=str.find(somya);
    cout<<index;
    cout<<endl;

    index=str.find(somya,index+1);
    cout<<index;
    cout<<endl;

    index=str.find(somya,index+1);
    cout<<index;
    cout<<endl;

    index=str.find(somya,index+1);
    cout<<index;
    cout<<endl;

    index=str.find(somya,index+1);
    cout<<index;
    cout<<endl;
     return 0;
}
