#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    vector <int> arr(3);

    for(int i=0; i<3; i++){
        cin >> arr[i];
    }

    if(arr[0] == arr[1] && arr[1] == arr[2]){
        cout << "YES" << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    int a, b, c;
    a = arr[0];
    b = arr[1];
    c = arr[2];


    if(b%a == 0 && c%a == 0 && (b / a - 1) + (c / a - 1) <= 3){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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