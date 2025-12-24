#include<iostream>
#include<vector>
#include <map>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<long long,long long> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    long long mx_freq = 0;
    for(auto it:freq){
        mx_freq = max(mx_freq,it.second);
    }
    long long op = 0;
    while(mx_freq<n){
        op++;
        if(mx_freq*2<=n){
            op += mx_freq;
            mx_freq = mx_freq*2;
        } else {
            op += (n - mx_freq);
            mx_freq = n;
        }
    }
    cout<<op<<endl;
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