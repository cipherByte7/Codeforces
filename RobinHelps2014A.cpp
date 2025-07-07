#include <iostream>
#include <vector>
using namespace std;

int main () {
    long long t, n, robin, k, give;
    cin >> t;

    while(t--){
        cin >> n >> k;
        vector <int> arr(n);

        robin =0;
        give =0;

        //inpuit vector
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        //traversal
        for(int i=0; i<n; i++){
            if(arr[i]==0 && robin){
                robin--;
               
                give++;
            }
            if(arr[i]>=k){
                robin += arr[i];
                arr[i] = 0;
            }
        }

        cout << give << endl;

    }
}