#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> arr(n);


    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //input done

    vector <int> ans(n);

    for(int i=0; i<n; i++){
        ans[i] = n + 1 - arr[i];
    }

   
    //print
    for(int i=0; i<n; i++){
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