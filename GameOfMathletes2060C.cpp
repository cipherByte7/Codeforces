#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {

    int t, n, k, score, i, j;
    cin>> t;

    while(t--){
        cin>> n;
        cin>> k;

        score= 0; i=n-1; j=0;
        vector<int> arr(n);

        //array input
        for(int p=0; p<n; p++){
            cin>> arr[p];
        }
    

        //sorting
        sort(arr.begin(), arr.end());
        //brute force traversal
        
        if(k<= arr[0]){
            cout<< "0"<< endl;
            continue;
        }

        while(i>j){
            if(arr[i] + arr[j] == k){
                score++;
                i--;
                j++;
            }else if(arr[i] + arr[j] > k){
                i--;
            }else if(arr[i] + arr[j] < k){
                j++;
            }
        }

        cout<< score << endl;

    }

    return 0;
}