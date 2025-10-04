#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve(){
    int n, K;
    cin >> n >> K;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //input done

    int ans;

    int occK=0, missingNo=0;
    set <int> s;
    
    for(int i=0; i<n; i++){
        if(arr[i] == K) occK++;
        if(arr[i] < K) s.insert(arr[i]);
    }

    int ss = s.size();
    missingNo = K - ss;

    ans = max(occK, missingNo);

    cout << ans << endl;
  
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
