#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, s;
    cin >> n >> s;
    vector <int> a(n);

    int zcnt = 0, ocnt =0, tcnt =0;

    int sum =0;

    for(int i=0; i<n; i++){
        cin >> a[i];

        if(a[i]==0)zcnt++;
        if(a[i]==1)ocnt++;
        if(a[i]==2)tcnt++;

        sum += a[i];
    }
    
    if(sum == s || s - sum > 1) {
        cout << "-1" <<endl;
        return;
    }

    if(sum > s) {
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }cout << endl;
        return;
    }

    vector <int> ans;
    if(s - sum == 1){
        
        for(int i=0; i<zcnt; i++){
            ans.push_back(0);
        }
        for(int i=0; i<tcnt; i++){
            ans.push_back(2);
        }
        for(int i=0; i<ocnt; i++){
            ans.push_back(1);
        }
    }

     for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }cout << endl;


}

int main(){

    int t;
    cin>> t;

    while(t--){
        solve();
    }
}