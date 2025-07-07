#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {

    long long t, n, min, max, MinCount, MaxCount;
    cin >> t;

    while(t--){

        cin >> n;
        MinCount =0;
        MaxCount =0;

        vector <int> arr(n);

        //input vector
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        //sort veector
        sort(arr.begin(), arr.end());
        min = arr[0];
        max = arr[n-1];

        if(min == max){
            cout << n*(n-1) << endl;
            continue;
        }
        

        //finding minCount and maxCount
        for(int i=0; i<n; i++){
            if(arr[i]==min){
                MinCount++;
            }
            if(arr[i]==max){
                MaxCount++;
            }
        }

        long long result = MinCount*MaxCount*2;
        cout << result << endl;


    }
    return 0;

}