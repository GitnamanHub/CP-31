#include<iostream>
#include<vector>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    if(n%2 || n<4) {
        cout<<-1<<endl;
        return;
    }
    long long mx = n/4;
    long long mn = n/6;
    if(n%6 != 0) mn++;

    cout<<mn<<" "<<mx<<endl;
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