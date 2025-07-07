#include <iostream>
using namespace std;

int main() {
   

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, flag = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;

            // Check the given condition
            if (t <= i * 2 || t <= (n - i - 1) * 2) {
                flag = 1;
            }
        }

       
        cout << (flag ? "NO\n" : "YES\n");
    }

    return 0;
}
