#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    int t, n, count;
    cin >> t;

    while(t--){

        count = 0;
        cin >> n;
        vector <int> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        for(int i=1; i<n; i++){
           if(abs(v[0]) > abs(v[i])){
            count++;
           }
        }

        if(count > ceil(n/2)){
            cout << "NO" << endl;
            //cout << count << endl;
            //cout << ceil(n/2) << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    

    return 0;
}