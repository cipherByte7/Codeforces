#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int m, n, k;
    cin >> m >> n >> k;
    pair <int, int> ab;
    cin >> ab.first >> ab.second;
    vector <pair <int, int>> friends(k);
    for(int i=0; i<k; i++){
        cin >> friends[i].first >> friends[i].second;
    }

    //input done
    bool escape = true;

    for(int i=0; i<k; i++){
        
    }


}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}