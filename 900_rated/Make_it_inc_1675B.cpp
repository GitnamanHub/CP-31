#include<iostream>
#include<vector>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long op=0;
    for(int i=n-2;i>=0;i--) {
        while(arr[i]>=arr[i+1] && arr[i]>=i){
            arr[i] = arr[i]/2;
            op++;
            if(arr[i]==0) break;
        }
        if(arr[i]<i || (arr[i]==0 && arr[i+1]==0)) {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<op<<endl;
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