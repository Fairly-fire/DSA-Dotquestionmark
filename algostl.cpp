#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={12,42,123,52,67,22,456};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int key;
    cin>>key;

    auto address = find(arr,arr+n,key);
    int index= address-arr;

    if(index==n){
        cout<<"not present";
    }
    else{
        cout<<index;
    }

    return 0;
}