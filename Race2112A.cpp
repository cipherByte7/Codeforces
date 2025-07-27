#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    int a, x, y, Min, Max;
    cin >> a >> x >> y;

    Min = min(x, y);
    Max = max(x, y);

    if(a < Min  || Max < a){
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