#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

string extractKey(string str , int key){
    char* strKey = strtok((char*)str.c_str()," ");
    while(key>1){
        strKey = strtok(NULL , " ");
        key--;
    }
    return string(strKey);
}

bool numComp(pair<string,string>n1, pair<string,string>n2){
    return stoi(n1.second)<stoi(n2.second);
}

bool dicComp(pair<string,string>n1, pair<string,string>n2){
    return n1.second<n2.second;
}

int main(){
    int n;
    cin>>n;
    cin.get();

    string list[n];
    for(int i=0;i<n;i++){
        getline(cin,list[i]);
    }

    for(int i=0;i<n;i++){
        cout<<list[i]<<endl;
    }

    int key;
    cin>>key;

    pair<string,string> strPair[n];
    for(int i=0;i<n;i++){
        strPair[i].first= list[i];
        strPair[i].second = extractKey(list[i],key);
    }

    bool sortingType, reverse;
    cin>>sortingType>>reverse;

    if(sortingType==0){
        sort(strPair,strPair+n,numComp);
    }
   
    else{
     sort(strPair,strPair+n,dicComp);
   }
   if(reverse){
        std::reverse(strPair,strPair+n);
    }
   
    else{
        std::reverse(strPair,strPair+n);
   }
    
    for(int i=0;i<n;i++){
        cout<<strPair[i].first<<" ";
        cout<<endl;
    }
    return 0;
}