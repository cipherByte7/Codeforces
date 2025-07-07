#include <iostream>
#include <string>
using namespace std;

int main () {

    int t, n, u;
    char s;
    cin >> t;

    while (t--){
        cin >> n;
        u=0;

        //taking input and scanning for number of U's
        for(int i=0; i<n; i++){
            cin >> s;
            if(s == 'U'){
                u++;
            }
        }

        if(u%2 != 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

