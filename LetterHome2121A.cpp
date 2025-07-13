#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){

    int t, n, s;
    cin >> t;

    while(t--){
        cin >> n >> s;
        vector <int> arr(n);

        //input array
        for(int i=0; i<n; i++){
            cin >> arr[i];
        } 

        sort(arr.begin(), arr.end());

        if(s<=arr[0]){
            cout << arr[n-1] - s << endl;
            continue;
        }

        if(s>=arr[n-1]){
            cout << s-arr[0] << endl;
            continue;
        }else{
            int close = min(arr[n-1]-s, s-arr[0]);
            //cout << "This is Close" << close << endl;
            cout << close + (arr[n-1] - arr[0]) << endl;
        }


    }

    return 0;
}