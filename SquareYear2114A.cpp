#include <iostream>
#include <cmath>
using namespace std;

bool hasDecimal(float num) {
    return abs(num - trunc(num)) > 0;
}

int main(){

    int t, a, b;
    cin >> t;

    while(t--){
        float n;
        cin >> n;

        n = sqrt(n);

        if(hasDecimal(n))
        cout << "-1" << endl;
        continue;

        a = n;
        b = n-1;



    }
}