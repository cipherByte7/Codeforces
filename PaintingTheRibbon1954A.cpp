#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float t, n, m, k, c;
    cin >> t;

    while(t--){
        cin >> n >> m >> k;
        c = n - ceil(n/m);

        if(n==1 || m==1){
            cout << "NO" << endl;
        }else if(k >= c){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }

    }

    return 0;
}