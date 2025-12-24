#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    
    if(((2*b-c)%a==0 && 2*b>c) || (a+c)% (2*b)==0 || ((2*b - a)%c==0) && 2*b>a){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
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