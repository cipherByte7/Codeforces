#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool same(int a, int b){
    if(a%2 ==0 && b%2 == 0){
        return true;
    }

    if(a%2 !=0 && b%2 != 0){
        return true;
    }

    return false;
}

void solve(){
    int n, m;
    cin >> n >> m;

    int a, b;

    bool pos = true;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        if(same(a, b) == pos){

        }else{
            m--;
            pos = !pos;
        }
    }

    cout << m << endl;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
} 