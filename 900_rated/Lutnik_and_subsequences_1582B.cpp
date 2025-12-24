#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int cnt_one=0, cnt_zero=0;
    for(int i=0;i<n;i++) {
        if(a[i]==1) {
            cnt_one++;
        } else if(a[i]==0) {
            cnt_zero++;
        }
    }

    if(cnt_zero==0) {
        cout<<cnt_one<<endl;
        return;
    }
    long long ans = 1LL*cnt_one*(1LL<<cnt_zero);
    cout<<ans<<endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}