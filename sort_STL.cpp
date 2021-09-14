#include<iostream>
#include<algorithm>

using namespace std;
//sorting in decending order using self made function
bool selfmadesort(int n1,int n2){
    return n1>n2;
}

int main(){
    int arr[]={12,42,123,52,67,22,456};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+n,selfmadesort);
 
    for(auto a:arr)
        cout<<a<<" ";

    return 0;
}