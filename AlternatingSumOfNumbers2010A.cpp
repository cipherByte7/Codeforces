#include <iostream>
using namespace std;
int main () {

    int t, n, a, ans;
    cin >> t;

    while(t--){
        cin >> n;
        ans =0;
        for(int i=0; i<n; i++){
            cin >> a;
            if(i%2 ==0){
                ans = ans + a;
            }else{
                ans = ans - a;
            }
        }
        cout << ans << endl;
    }

    return 0;
}