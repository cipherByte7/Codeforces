#include <iostream>
using namespace std;

int main (){
    long long t, x, y, a;
    cin >> t;

    while(t--){
        cin >> x >> y >> a;
        if (a % (x + y) < x) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}