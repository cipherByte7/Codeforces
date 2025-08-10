#include <iostream>
#include <set>
#include <map>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    map<int,int> a;

    for(int i = 0 ; i < n ; i++){
        int k;cin >> k;
        a[k]++;
    }
    for(int i = 0 ; i < n ; i++){
        int k;cin >> k;
        a[k]--;
    }
    for(auto val : a){
        if(val.second != 0){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}