#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i;
    int n,key;
    cout<<"Size of array you want"<<endl;
    cin>>n;
    cout<<"Input :";
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array :";
    for( i=0;i<n;i++)
    {
         cout<<a[i]<<",";
    }
    cout<<"\n Enter the number youn want to search:"<<endl;
    cin>>key;
    for ( i=0;i<=n-1;i++)
    {
        if(a[i]==key)
        {
            cout<<key<<" Found  at index :"<<i<<endl;
            break;
        }
    }
        if(i==n)
        {
            cout<<"Element not found";
        }
   return 0;
}
