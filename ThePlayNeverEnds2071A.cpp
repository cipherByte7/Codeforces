#include <iostream>
using namespace std;

int main () {

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        if(n%3 == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}