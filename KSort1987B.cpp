#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    //edge case handle
    
    vector <int> a(n);

    for(int i=0; i<n ; i++){
        cin >> a[i];
    }
    //INPUT HO GYA
    
    if(n==1){
        cout << "0" << endl;
        return;
    } 

    for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1]){
            
        }
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