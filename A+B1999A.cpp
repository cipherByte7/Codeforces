#include <iostream>
using namespace std;

int main () {

    int t, n, d1, d2, ans;
    cin >> t;

    while(t--){
        cin >> n;

        d1 = n%10;
        n = n/10;
        d2 = n;
        ans = d1 + d2;

        cout << ans << endl;


    }

    return 0;
}