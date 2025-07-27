#include <iostream>
using namespace std;

bool is_prime(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void solve(){
    int x, k;
    cin >> x >> k;

    if(x==1 && k==2){
        cout << "YES" << endl;
        return;
    }
    if(k>1){
        cout << "NO" << endl;
        return;
    }
    


    if(is_prime(x) && k==1){
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