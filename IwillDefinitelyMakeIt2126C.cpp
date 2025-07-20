#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int index(vector <int> &arr, int k){
    int value = arr[k-1];

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        if(arr[i] == value){
            return i;
        }
    }
}

void solve(){
    int n, k, waterLevel;
    cin >> n >> k;
        waterLevel = 1;
        vector <int> arr(n);

        //input vector
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int ind = index(arr, k);
        
        for(int i=ind; i<n-1; i++){
            if(waterLevel + (arr[i+1] - arr[i]) <= arr[i+1] && (arr[i]- waterLevel) >= (arr[i+1] - arr[i] -1)){
                waterLevel = waterLevel + (arr[i+1] - arr[i]);
            }else{
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;
 
}

int main (){

    int t;
    cin >> t;

    while(t--){
           solve();    
    }

    return 0;
}