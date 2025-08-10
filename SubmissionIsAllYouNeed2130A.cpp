#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    int sum =0, zcnt = 0;;
    for(int i=0; i<n; i++){
        sum += s[i];
        if(s[i] == 0){
            zcnt++;
        }
    }

    cout << sum + zcnt << endl;

}

int main(){ 
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}