#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {

    int t;
    cin>>t;

   

    while(t--){
        
        int n,k,a;
        cin>>n>>k;


        //input in vector
         vector <int> chest;

        for(int i=0; i<n; i++){
            cin>>a;
            chest.push_back(a);
        }  
        
         
        
        //sorting
        sort(chest.begin(),chest.end(), greater<int>());

        int sum=0, ans;

        //summation of coins

        for(int i=0; i<n; i++){
            if(sum<k){
                sum += chest[i];
            }

            if(sum > k){
                sum-=chest[i];
                break;
            }

            if(sum == k){
                break;
            }
        }

        ans = k - sum;
        cout << ans << endl;
        

        

    }

    return 0;
}