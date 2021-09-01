#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[100];
    int i;
    int n;
    cout<<"Size of array you want"<<endl;
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array"<<endl;
    for( i=0;i<n;i++)
    {
         cout<<a[i]<<",";
    }

    int largest =INT_MIN;
    int smallest =INT_MAX;

    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
        if(a[i]<smallest)
        {
            smallest =a[i];
        }
    }
    cout<<"Largest No.: "<<largest<<endl;
    cout<<"Smallest No.: "<<smallest<<endl;
    return 0;
}
