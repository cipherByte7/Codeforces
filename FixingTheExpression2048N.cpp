
#include <iostream>
using namespace std;

int main() {
    int t,a,b;
    char s;

    cin >> t;

    while(t--){
        cin >> a >> s >> b ;
        if(a>b){
            cout << a << ">" << b << endl;
        }

        if(a<b){
            cout << a << "<" << b << endl;
        }

        if(a==b){
            cout << a << "=" << b << endl;
        }
    }
    
    return 0;
}