#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<list>

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        if(x%k==0) a[i]=k;
        else a[i] = x%k;
    }
    unordered_map<int,list<int>> mp;
    for(int i=0;i<n;i++) {
        mp[a[i]].push_back(i+1);
    }
    sort(a.begin(), a.end(),greater<int>());
    for(int i=0;i<n;i++) {
        cout<<mp[a[i]].front()<<" ";
        mp[a[i]].pop_front();
        if(mp[a[i]].empty()) {
            mp.erase(a[i]);
        }
    }
    cout<<"\n";
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