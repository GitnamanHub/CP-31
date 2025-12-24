#include<iostream>
#include<vector>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int n = s.length();
    if(n==0 || n==1) {
        cout<<n<<'\n';
        return;
    }

    int cnt_0=0, cnt_1=0;
    for(char c : s) {
        if(c == '0') cnt_0++;
        else cnt_1++;
    }
    int i=0;
    while(i<n && cnt_0!=0 && cnt_1!=0) {
        if(s[i]=='0') {
            cnt_1--;
        } else {
            cnt_0--;
        }
        i++;
    }
    while(i<n && cnt_0!=0 && s[i]=='1') {
        cnt_0--;
        i++;
    }
    while(i<n && cnt_1!=0 && s[i]=='0') {
        cnt_1--;
        i++;
    }
    cout<<n - i<<'\n';
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}