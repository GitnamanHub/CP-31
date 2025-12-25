// 2
// 2
// 1
// 0
// 2
// 0
// 1
// 2
// 0
// 1
// 1
// 4
// 0
// 4
// 3

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    // int pdt = 1;
    // for(int i=0;i<n;i++) {
    //     pdt = (pdt*a[i])%k;
    // }
    // int cnt=0;
    // while(pdt%k!=0) {
    //     pdt++;
    //     cnt++;
    // }
    // cout<<cnt<<'\n';
    // return;
    int mn = k;
    int even=0;
    for(int i=0;i<n;i++) {
        if(a[i]%k==0) {
            cout<<0<<'\n';
            return;
        }
        if(a[i]%2==0) even++;
        mn = min(mn, k-a[i]%k);
    }
    if(k==4){
        if(even>=2) {
            cout<<0<<'\n';
            return;
        } else if(even==1){
            cout<<1<<'\n';
            return;
        } else {
            mn=min(mn,2);
        }
    }
    cout<<mn<<'\n';
    return;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
}

