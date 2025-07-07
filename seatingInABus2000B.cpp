//wrong code
//logic :  fill by checking neighbours

#include <iostream>
#include <vector>
using namespace std;

int main () {
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        vector <int> a(n);
        vector <int> check(n, 0);

        //input in vector
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        //checkin rule
        for(int i=1; i<n-1; i++){
            if(check[i-2]==0 && check[i]==0){
                cout << "NO" << endl;
                break;
            }else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}