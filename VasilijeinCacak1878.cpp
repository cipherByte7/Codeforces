#include <iostream>
using namespace std;

void solve(){
    long long n, k, x;
    cin >> n >> k >> x;
    long long min=0, max=0, a=1, z=n;
    
    while(k--){
        min+= a++;
        max+= z--;
    }

    if(min <= x && x<= max){
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