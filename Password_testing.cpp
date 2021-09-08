#include<iostream>
using namespace std;
int main()
{
    string str="teststring12*3";
    int lower=0,upper=0,number=0,special=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
        }
        if(str[i]>='a' && str[i]<='z')
        {
            lower++;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            number++;
        }
        else 
        {
            special++;
        }
    }

    if(lower&&upper&&number&&special)
    {
        cout<<"Valid";
    }
    else{
        cout<<"Not Valid";
    }

   return 0;
}
