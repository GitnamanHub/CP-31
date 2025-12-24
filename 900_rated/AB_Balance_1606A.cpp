#include<iostream>
#include<vector>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    if(n==1) {
        cout<<s<<endl;
        return;
    }
    char ch = s[0];
    s[n-1] = ch;
    cout<<s<<endl;
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