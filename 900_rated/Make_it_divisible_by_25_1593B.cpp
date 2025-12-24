#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


int fun(int a,int b,long long n){
    int cnt = 0;
    while(n>0) {
        if(n%10==b) {
            break;
        }
        n/=10;
        cnt++;
    }
    n/=10;
    cnt++;
    while(n>0) {
        if(n%10==a) {
            break;
        }
        n/=10;
        cnt++;
    }
    if(n==0) {
        return INT_MAX;
    }
    cnt++;
    return cnt-2;
}

void solve() {
    long long n;
    cin >> n;

    cout<<min({fun(0,0,n),fun(2,5,n),fun(5,0,n),fun(7,5,n)})<<endl;
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