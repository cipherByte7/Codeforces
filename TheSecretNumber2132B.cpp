#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector <int> ans;
    for(int i=1; i<=18; i++){
        if(n % (long long)(1 + pow(i, 10)) == 0){
            ans.push_back(n/(pow(10, i)));
        } 
    }

    sort(ans.begin(), ans.end());

    int size = ans.size();

    cout << size << endl;
    for(int i=0; i<size; i++){
        cout << ans[i] << " ";
    }cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}