#include <iostream>
using namespace std;

void solve(){
    int n, m;
    string a, b, c, ans;
    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    cin >> c;

    for(int i=m-1; i>=0; i--){
        if(c[i] == 'V'){
            ans.push_back(b[i]);
        }
    }

    for(int i=0; i<n; i++){
            ans.push_back(a[i]);
    }

    for(int i=0; i<m; i++){
        if(c[i] == 'D'){
            ans.push_back(b[i]);
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