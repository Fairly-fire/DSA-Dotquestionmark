//LENGTH OF STRING
#include<iostream>
using namespace std;
int main()
{
    string str="Hello World this is a string in c++";
    //HELLO WORLD

    int word=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&& str[i+1]!=' ')
        {
            word++;
        }
    }
    if(str[0]!=' ')
    {
        word++;
    }
    else if(str[str.length()-1]==' ')
    {
        word--;
    }
    cout<<word<<endl;
}
