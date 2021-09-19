//https://practice.geeksforgeeks.org/problems/sums-of-i-th-row-and-i-th-column3054/1/?problemStatus=solved&page=1&query=problemStatussolvedpage1

void solve(){ 
    int r, c, t;
    cin>>r>>c;
    int row[r]={0};
    int col[c]={0};
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>t;
            row[i]+=t;
            col[j]+=t;
        }
    }
    for(int i=0; i<min(r,c); i++){
        if(row[i]==col[i]){
            cout<<"Yes"<<endl;
            return;
        }
    cout<<"No"<<endl;
}
}
int main() {
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
