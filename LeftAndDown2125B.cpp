#include <iostream>
#include <cmath>
#include <climits>
#include <numeric>
using namespace std;

long long gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


void solve(){
    long long a, b, k, g;
    cin >> a >> b >> k;
    g = gcd(a, b);
    a = a/g;
    b = b/g;

    if(max(a, b) <= k){
        cout << "1" << endl;
    }else{
        cout << "2" << endl;
    }
}

int main (){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
