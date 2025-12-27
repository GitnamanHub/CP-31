#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long long int i=0,j=0;
    long long int total=0;
    while(j<n) {
        if(a[j]<=q) j++;
        else {
            long long int len = j - i;
            if(len>=k) {
                total+= ((len-k+1) * (len-k+1 + 1)) / 2;
            }
            i = j + 1;
            j = i;
        }
    }
    long long int len = j - i;
    if(len>=k) {
        total+= ((len-k+1) * (len-k+1 + 1)) / 2;
    }
    cout << total << "\n";
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