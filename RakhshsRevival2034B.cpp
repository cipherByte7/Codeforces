#include <iostream>
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    int zcount = 0, ans=0;

    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            zcount++;
        }else{
            zcount = 0;
        }

        if(zcount == m){
            ans++;
            i = i + k-1;
            zcount = 0;
        }
    }

    cout << ans << endl;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    
    return 0;
}