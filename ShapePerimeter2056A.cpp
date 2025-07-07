#include <iostream>
#include <vector>
using namespace std;

int main () {

    int t, n, m, ans;
    cin >> t;

    while(t--){

        cin >> n >> m;
        ans = 0;

        vector <int> arrX(n), arrY(n);

        //input Xi and Yi
        for(int i=0; i<n; i++){
            cin >> arrX[i] >> arrY[i];
        }

        //implementing formula step by step
        //ans = 2((m+Y1+Y2...Yn) + (m+X1+X2...+Xn))
        for (int i=1; i<n; i++){
            ans = arrX[i] + arrY[i] + ans;
        }
        ans = 2*(ans + (2*m));

        //print ans
        cout << ans << endl;
 
    }

    return 0;
}