#include <iostream>
using namespace std;

int main () {

    int t, l, r, d, u ;
    cin>>t ;

    while(t--) {
        cin >>l >>r >>d >>u ;
        if(l==r && d==u && r==d){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;

        }
    }
    return 0;
}