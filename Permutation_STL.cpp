//Permutation
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    do
    {
        for(auto a:arr)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }while(next_permutation(arr,arr+n));
    return 0;
}
