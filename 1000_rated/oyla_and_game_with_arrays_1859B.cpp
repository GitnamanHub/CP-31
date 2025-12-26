#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++) {
        int m;
        cin>>m;
        for(int j=0;j<m;j++) {
            int x;
            cin>>x;
            arr[i].push_back(x);
        }
        sort(arr[i].begin(),arr[i].end());
    }
    int mn=arr[0][0];
    int mn_ind = 0;
    for(int i=0;i<n;i++) {
        if(arr[i][0]<mn) {
            mn=arr[i][0];
            mn_ind=i;
        }
    }
    int mn_2=arr[0][1];
    int mn_2_ind = 0;
    for(int i=0;i<n;i++) {
        if(arr[i][1]<mn_2) {
            mn_2=arr[i][1];
            mn_2_ind=i;
        }
    }
    long long int sum=mn;
    for(int i=0;i<n;i++) {
        if(i!=mn_2_ind) {
            sum+=arr[i][1];
        }
    }
    cout<<sum<<"\n";
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