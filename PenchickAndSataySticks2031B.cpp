#include <iostream>
#include <vector>
using namespace std;


int main () {

    long long t, n, ans;
    cin >> t;

    while (t--) {
        cin >> n;
        ans = 0;
        vector <long long> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            if(abs(arr[i] - (i+1)) > 1){
               ans++;
            }
        }               
         if(ans){
            cout << "NO" << endl;
         }else{
            cout << "YES" << endl;
         }
    }

    return 0;
}
