#include <iostream>
using namespace std;

int main(){

    int t, n, m;
    cin >> t;

    while(t--){
        cin >> n >> m;
        if((n>=3 && m>=2) || (n>=2 && m>=3)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}