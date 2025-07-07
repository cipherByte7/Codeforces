#include <iostream>
#include <climits>
using namespace std;

int main(){

    long long t, n, m, l, r, max, A;
    cin >> t;

    while(t--){

        cin >> n >> m;
        max = INT_MIN;

        //getting array and storing its max value only
        for(int i=0; i<n; i++){
            cin >> A;
            if(A>max){
                max = A;
            }
        }

        char c;

        while(m--){
            cin >> c >> l >> r;
            //updating value of A for each operation and printing each time
            if(l<=max && max<=r){
                if(c == '+'){
                    max++;
                }else{
                    max--;
                }
            }

            cout << max << " ";
        }
        cout << endl;
    }

    return 0;
}