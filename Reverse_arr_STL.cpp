//Reversing of an Array
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={3,6,5};
    sort(arr,arr+3);
    reverse(arr,arr+3);
    for(auto a:arr)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
