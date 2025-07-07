#include <iostream>
using namespace std;

int main () {

    int t, X, Y, K;
    cin >> t;

    while(t--){
        cin >> X >> Y >> K;
        
        if(X<=Y){
            cout << "0 0 " << X << " " << X << endl;
            cout << X << " 0 0 " << X << endl;

        }else{
            cout << "0 0 " << Y << " " << Y << endl;
            cout << Y << " 0 0 " << Y << endl;
        }
    }
    return 0;
}