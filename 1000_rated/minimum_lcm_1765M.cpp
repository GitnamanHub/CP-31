#include<iostream>
#include<vector>

using namespace std;

void solve() {
    long long int n;
    cin>>n;
    long long a = 1;
    long long b = n-1;

    for(long long int fac=2;fac*fac<=n;fac++) {
        if(n%fac==0) {
            a=n/fac;
            b=n-a;
            cout<<a<<" "<<b<<"\n";
            return;
        }
    }
    cout<<a<<" "<<b<<"\n";
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