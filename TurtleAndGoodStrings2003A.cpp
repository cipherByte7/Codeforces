#include <iostream>
using namespace std;

int main () {

    int t, n;
    cin >> t;
   


    while(t--){
        cin >> n;
        string s;
        cin >> s;
        
        if(s[0] == s[n-1]){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}