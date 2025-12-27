#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

void solve() {
    int n;
    cin>>n;
    string a;
    cin>>a;
    unordered_map<char,int> left,right;
    for(int i=0;i<n;i++) {
        right[a[i]]++;
    }
    int mx = 0;
    for(int i=0;i<n-1;i++) {
        right[a[i]]--;
        if(right[a[i]]==0) right.erase(a[i]);
        left[a[i]]++;
        mx = max(mx, (int)left.size() + (int)right.size());
    }
    cout<<mx<<"\n";
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