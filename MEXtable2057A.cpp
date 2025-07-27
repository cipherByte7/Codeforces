#include <iostream>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    cout << max(a,b) +1  << endl;

}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}