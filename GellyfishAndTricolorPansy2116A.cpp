#include <iostream>
using namespace std;

void solve(){
    long int a, b, c, d;

    cin >> a >> b >> c >> d;

    a = min(a, c);
    b = min(b, d);

    if(a>=b){
        cout << "Gellyfish" << endl;
    }else{
        cout << "Flower" << endl;
    }

}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}