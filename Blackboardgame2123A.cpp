#include <iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;

        if(n < 3){
            cout << "ALICE" << endl;
            continue;
        }

        if(n%4 == 0){
            cout << "BOB" << endl;
        }else{
            cout << "ALICE" << endl;
        }
    }
    return 0;
}