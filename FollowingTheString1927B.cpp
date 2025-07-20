#include <iostream>
#include <vector>
using namespace std;

int main(){

    int t, n;
    cin >> t;

    //alphabet hash table array
    

    while(t--){
        cin >> n;
        vector <int> arr(n);
        string ans;
        int hash[26] = {0};

        //input trace array
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        

        
        //update hash table and push characters in string ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<26; j++){
                if(arr[i] == hash[j]){
                    ans.push_back('a'+ j);
                    hash[j]++;
                    j=0;
                    break;
                }
            }
        } 

       

        cout << ans << endl;
        
    }

    return 0;
}