#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    long long a, b, m, A, B;

    while(t--){
        A = 0; B = 0;
        cin >> a >> b >> m;

        A = m/a;
        B = m/b;
        
        

        cout << A + B + 2<< endl;

    }

    return 0;
}