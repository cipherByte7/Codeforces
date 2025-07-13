#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
    int t, n;
    cin >> t;

    while(t--){

        cin >> n;
        vector <int> a(n);
        
        //input vector
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

       
        //sorting
        sort(a.begin(), a.end());

        int max, count =0;
        max = a[n-1];
        int j=n-1;
        bool ans = false;
        while(j>=0){
            if(a[j]== max){
                count++;
                j--;
            }

            if(a[j]!= max){
                if(count%2 !=0){
                    ans = true;
                }

                max = a[j];
                count = 0;
            }
        }

        if(ans){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

       
    }

    return 0;
}