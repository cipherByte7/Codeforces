#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //input done

    vector <int> occ;
    int count = 1;
    
    int j=1;
    while(j<n){
        if(arr[j] == arr[j-1]){
            count++;
            j++;
        }else{
            occ.push_back(count);
            count = 1;
            j++;
        }
    }
    occ.push_back(count);
    //counted occurences of each distinct elements

    int s = occ.size();
    sort(occ.begin(), occ.end());//sort occ array

    int maxi = INT_MIN;

    for(int k=0; k<s; k++){
        maxi = max(maxi, occ[k]*(s-k));
    }

    cout << maxi << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
