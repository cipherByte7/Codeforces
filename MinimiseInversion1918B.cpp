#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<pair<int,int>> ab(n);

    for(int i=0; i<n; i++){
        cin >> ab[i].first;
    }

    for(int i=0; i<n; i++){
        cin >> ab[i].second;
    }

    sort(ab.begin(), ab.end());

    for(int i=0; i<n; i++){
       cout << ab[i].first << " ";
    }cout << endl;

    for(int i=0; i<n; i++){
       cout << ab[i].second << " ";
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