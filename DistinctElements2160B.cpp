#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <long long> b(n);


    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    //input done

    vector <int> a;
    a[0] = 1;

    for(int i=1; i<n; i++){
        if(b[i] - b[i-1] == 1){
            a[i] = a[i-1];
        }

        if(b[i] - b[i-1] == 2){
            a.push_back(a[0]);
        }

        if(b[i] - b[i-1] > 2){
            a.push_back(a[i]);
        }
    }

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
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