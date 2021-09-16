#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
    string str = "Hello my name is Somya";
    char* ptr = strtok((char*)str.c_str()," ");
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr = strtok(NULL , " ");
        cout<<ptr<<endl;
    }

    return 0;
}