#include<iostream>
#include<vector>
using namespace std;

void solve(){
    long long x,n;
    cin>>x>>n;
    if(x%2==0) {
        long long add = 0;
        if(n%4==0) {
            add = 0;
        } else if(n%4==1) {
            add = -n;
        } else if(n%4==2) {
            add = 1;
        } else {
            add = n+1;
        }
        cout<<x+add<<endl;
    } else {
        long long add = 0;
        if(n%4==0) {
            add = 1;
        } else if(n%4==1) {
            add = n+1;
        } else if(n%4==2) {
            add = 0;
        } else {
            add = -n;
        }
        cout<<x+add-1<<endl;
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}