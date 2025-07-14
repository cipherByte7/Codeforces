#include <iostream>
using namespace std;
 
int main(){
 
    int t, n, count;
    cin >> t;
 
    while(t--){
        string s;
        cin >> n;
        cin >> s;
        count = 0;
 
        for(int i=1; i<n-1; i++){
            if(s[i] == s[0] || s[i] == s[n-1]){
                count++;
                break;
            }
        }
 
        for(int i=1; i<n-1; i++){
            for(int j=i; j<n-1; j++){
                if(s[i] == s[j] && i!=j){
                    count++;
                    break;
                }
            }
            if(count){
                break;
            }
        }
 
        if(count){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}