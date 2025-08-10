#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n, m, q;
    cin >> n >> m >> q;

    vector <int> a(q); // total queries for position of david
    vector <int> b(m); // positions of teachers

    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    for(int i=0; i<q; i++){
        cin >> a[i];
    }

    sort(b.begin(), b.end());

    if(a[0] < b[0]){
        cout << b[0] - 1 << endl;
        return;
    }

    if(a[0] > b[1]){
        cout << n-b[1] << endl;
        return;
    }

    cout << (b[1] - b[0])/2 << endl;


}

int main(){ 

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}