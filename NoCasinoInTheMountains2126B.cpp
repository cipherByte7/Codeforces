#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main (){

    int t, n , k, hike, count;
    cin >> t;

    while(t--){
        cin >> n >> k;
        hike = 0; count =0;
        vector <int> arr(n);

        //input vector
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                count++;
                //can she complete the hike
                if(count == k){
                    hike++;
                    count = 0;
                    i++;
                }

            }else{
                count = 0;
            }
        }

        cout << hike << endl;
    }

    return 0;
}