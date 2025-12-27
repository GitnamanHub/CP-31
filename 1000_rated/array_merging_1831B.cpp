#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    unordered_map<int, int> countA, countB;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int len=1;
    for(int i=0; i<n-1; i++) {
        if(a[i]==a[i+1]) len++;
        else {
            countA[a[i]] = max(countA[a[i]], len);
            len=1;
        }
    }
    if(len) countA[a[n-1]] = max(countA[a[n-1]], len);
    len=1;
    for(int i=0; i<n-1; i++) {
        if(b[i]==b[i+1]) len++;
        else {
            countB[b[i]] = max(countB[b[i]], len);
            len=1;
        }
    }
    if(len) countB[b[n-1]] = max(countB[b[n-1]], len);
    int ans=0;
    for(auto it: countA) {
        ans = max(ans, it.second + countB[it.first]);
    }
    for(auto it: countB) {
        ans = max(ans, it.second + countA[it.first]);
    }
    cout<<ans<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
}