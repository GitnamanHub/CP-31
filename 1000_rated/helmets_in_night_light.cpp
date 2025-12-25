// 16
// 100000
// 265

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve() {
    int n,p;
    cin>>n>>p;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++) {
        vec.push_back({b[i],a[i]});
    }
    sort(vec.begin(),vec.end());
    long long cost=0;
    int i=0;
    int cnt=0;
    while(i<n && vec[i].first<p) {
        if(i==0) {
            cost=p;
            cnt=1;
        }
        if(cnt+vec[i].second>n) {
            cout<<cost+1LL*(n-cnt)*vec[i].first<<"\n";
            return;
        }
        cnt+=vec[i].second;
        cost +=1LL*vec[i].first * vec[i].second;
        i++;
    }
    cost+= 1LL*(n-cnt)*p;
    cout<<cost<<"\n";
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