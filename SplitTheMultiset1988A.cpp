#include <iostream>
using namespace std;

int main(){

    int t, n, k, count;
    cin >> t;

    while(t--){
        cin >> n >> k;
        count = 0;
        
        k=k-1;
        while(n>1){
            n = n-k;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}