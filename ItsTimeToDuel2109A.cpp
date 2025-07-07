#include <iostream>
#include <vector>
using namespace std;

int sumV(vector <int> v, int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum + v[i];
    }

    return sum;
}

int main () {

    int t, n, count;
    cin >> t;

    while(t--){
        cin >> n;
        count =0;
        vector <int> v(n);

        //input vector
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        for(int i=0; i<n-1; i++){
            if(v[i]==0 && v[i+1]==0){
                count++;
            }
        }

        if(sumV(v, n) == 0 || sumV(v, n) == n ){
            cout << "YES" << endl;
        }

        else if(count){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }


    }


}