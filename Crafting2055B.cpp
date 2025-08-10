#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    vector <int> c(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
     for(int i=0; i<n; i++){
        cin >> b[i];
    }
    //input taking over

    for(int i=0; i<n; i++){
        c[i] = a[i] - b[i]; //updating my balance vector and sorting later
    }

    sort(c.begin(), c.end());

    if(c[0] > 0 ){
        cout << "YES" << endl; 
        return;
    }


    if(c[0] < 0 && c[1]<0){
        cout << "NO" << endl; // extreme case in which its never possible to achieve our required materials
        return;
    }

    for(int i=1; i<n; i++){
        if(abs(c[0]) > abs(c[i])){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

}

int main(){ 

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}

