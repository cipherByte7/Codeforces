#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    //input done.

    sort(a.begin(), a.end());

    vector<int> cnt = {1};
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cnt.back()++;
        } else {
            cnt.push_back(1);
        }
    }

    /*for(int i=0; i<size; i++){
        cout << cnt[i] << " ";
    }

    cout << endl;*/

    sort(cnt.begin(), cnt.end());
    int m = cnt.size();
    for (int i = 0; i < m - 1; i++) {
        if (cnt[i] > k) {
            cout << m - i << endl;
            return;
        }
        k -= cnt[i];
    }
    cout << 1 << endl;;
    


}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}



