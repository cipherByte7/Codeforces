#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;

    if(n%2 == 0 ){
        cout << "-1" << endl;
        return;
    }

    vector <int> ans;
    for(int i=0; i<n; i+=2){
        ans.push_back(i+1);
    }

    for(int i=1; i<n; i+=2){
        ans.push_back(i+1);
    }

    for(int i=0; i<n; i+=1){
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

