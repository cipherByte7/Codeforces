#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int t, x1, x2, x3, MAX, MIN;
    cin >> t;

    while(t--){
        cin >> x1 >> x2 >> x3;
        MAX = max(x1, max(x2, x3));  // Correct way to find the max of three numbers
        MIN = min(x1, min(x2, x3));
        cout << MAX - MIN << endl;
    }

    return 0;
}