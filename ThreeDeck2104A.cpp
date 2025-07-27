#include <iostream>
using namespace std;

void solve(){
    int a, b ,c, ok;
    cin >> a >> b >> c;

    ok = c - b - b + a;

    if(ok%3 == 0 && ok>=0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}