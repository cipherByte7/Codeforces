#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n, c;
    cin >> n >> c;
    vector <int> a(n);
    vector <int> b;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        b.push_back(c/a[i]);
    }

    int checker=1;
    int free = 0;

    sort(b.begin(), b.end());

    for(int i=0; i<n; i++){
        if(b[i] >= checker){
            free++;
            checker = checker*2;
        }
    }

    int ans = n - free;
    cout << ans << endl;
    
    return;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}