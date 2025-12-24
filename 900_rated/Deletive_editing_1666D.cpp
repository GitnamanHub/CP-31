#include<iostream>
#include<vector>
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int n1 = s1.length();
    int n2 = s2.length();

    vector<int> freq_int_s2(26,0);
    for(int i=0;i<n2;i++){
        freq_int_s2[s2[i]-'A']++;
    }
    for(int i=n1-1;i>=0;i--) {
        if(freq_int_s2[s1[i]-'A']>0){
            freq_int_s2[s1[i]-'A']--;
        } else {
            s1[i] = '?';
        }
    }
    string result = "";
    for(int i=0;i<n1;i++){
        if(s1[i]!='?'){
            result += s1[i];
        }
    }
    if(result==s2){
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}