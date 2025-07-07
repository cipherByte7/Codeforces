#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main () {
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        vector <int> d(n), s(n), r(n);

        // input d and s
        for(int i=0; i<n; i++){
            cin >> d[i];
            cin >> s[i];
        }

        //updating r vector
        for(int i=0; i<n; i++){
            r[i] = d[i] + floor((s[i]-1)/2);
        }

        sort(r.begin(), r.end());

        cout << r[0] << endl;
        

    }

    return 0;
}
