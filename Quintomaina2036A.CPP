#include <iostream>
#include <vector>
using namespace std;

int main () {

    int t, n, no;
    cin >> t;

    while(t--){
        cin >> n;
        no = 0;
        vector <int> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        for(int i=0; i<n-1; i++){
            if(abs(v[i] - v[i+1])!=5 && abs(v[i] - v[i+1])!=7){
                no++;
                break;
            }
        }

        if(no){
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
