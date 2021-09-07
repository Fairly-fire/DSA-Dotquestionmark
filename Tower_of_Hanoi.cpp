#include<iostream>
using namespace std;
void tower(int n,char a, char b, char c)
{
    if(n>0)
    {
        tower(n-1,a,c,b);
        cout<<"move from "<<a<<"to"<<c<<endl;
        tower(n-1,b,a,c);
    }
    else
    {
        return ;
    }
}


int main()
{
    tower(3,'A','B','C');
}
