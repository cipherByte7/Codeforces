#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, ans;
    cin >> n;
    vector <int> a(n);
   
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    ans = a[0] + min(a[1], a[0]);

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

