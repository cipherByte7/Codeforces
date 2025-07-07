#include <iostream>
using namespace std;


int main () {
    int t, n, ans;
    cin >> t;

    string s;

    while(t--){

        cin >> s;
        n = s.length();
        ans = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                ans++;
            }
        }

        cout << ans << endl;
    }



    return 0;
}