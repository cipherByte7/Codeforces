#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k ;

    vector <int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    

    int ans =0 , key = a[k-1];

    for(int i=0; i<n; i++){
        if(a[i]>=key && a[i]>0){
            ans++;
        }
    }

    cout << ans << endl;
}

int main(){

    solve();

    return 0;   
}