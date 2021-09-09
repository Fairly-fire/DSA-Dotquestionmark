//STRING COMPARISON
#include<iostream>
using namespace std;
int compare_string(string str1,string str2)
{
    for(int i1=0,i2=0; str1[i1]!='\0' && str2[i2]!='\0';i1++,i2++)
    {
        if(str1[i1]!=str2[i2])
        {
            if(str1[i1]>str2[i2])
            {
                return 1;
            }
            else 
            {
                return -1;
            }
        }
    }
    return 0;
}
int main()
{
    string str1="Painter";
    string str2="Painting";

    cout<<compare_string(str2,str1)<<endl;
}
