#include<iostream> // For cin, cout
#include<vector>   // For std::vector

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<n && arr[i]==0) i++;
    while(j>=0 && arr[j]==0) j--;

    if(i>j) {
        cout<<0<<endl;
        return;
    }
    for(int k=i+1;k<j;k++){
        if(arr[k]==0){
            cout<<2<<endl;
            return;
        }
    }
    cout<<1<<endl;
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