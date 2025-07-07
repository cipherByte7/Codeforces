#include <iostream>
#include <cmath>
using namespace std;

void solve(long long n){
    long long count = 0, ans ;

    if(n<4){
        cout << "1" << endl;
        return;
    }

    while(n > 3){
        
        n = n/4;
        count++;
    }

    ans = pow(2,count);
    cout << ans << endl;

}

int main () {

    long long t, n;
    cin>> t;

    while(t--){
        cin>> n;
        solve(n);
    }

    return 0;
}