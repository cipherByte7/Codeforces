#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countDivisions(int x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend()); // Sort in descending order for optimal sum

    int points = 0, sum = 0;

    for (int x : a) {
        sum += x;
        if (sum % 2 == 0) {
            points += countDivisions(sum);
            while (sum % 2 == 0) {
                sum /= 2;
            }
        }
    }

    cout << points << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
