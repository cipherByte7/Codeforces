#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    int a, b, xk, yk, xq, yq, x, y;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;

    x = abs(xk - xq);
    y = abs(yq - yk);

    if(a==1 && b==1 && x==2 && y==2){
        cout << "1" << endl;
        return;
    }

    //diagonals case
    if(a+b == x && a+b == y){
        cout << "2" << endl;
        return;
    }

    //straight line case
    if(a*2 == x && yk == yq){
        cout << "2" << endl;
        return;
    }
    //straight line case
    if(xk == xq && b*2 == y){
         cout << "2" << endl;
        return;
    }

    cout << "0" << endl;

    
}

int main (){

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    
    return 0;
}