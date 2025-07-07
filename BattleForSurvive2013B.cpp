#include <iostream>
#include <vector>
using namespace std;

int main () {

    int t;
    long long n, ans;

    cin >> t;

    while (t--){
        cin >> n;
        vector <long long> arr(n);

        //input vector
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        //updating second last term in array
        for(int i=0; i<n-2; i++){
            arr[n-2] = arr[n-2] - arr[i];
        }

        ans = arr[n-1] - arr[n-2];
        
        //print ans
        cout << ans << endl;


    }

    return 0;
}
