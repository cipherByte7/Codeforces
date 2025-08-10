#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin>> n;
    if(n==2){
        cout << "-1" << " " << "2" << endl;
        return;
    }

    vector <int> a;
    for(int i=0; i<=n/2; i++){
        a.push_back(-1);
        a.push_back(3);
    }

    if(a[n-1] == 3){
        a[n-1] = 2;
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
}