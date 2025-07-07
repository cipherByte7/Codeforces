#include <iostream>
using namespace std;

bool alreadyUni(string s, int n){
   for(int i=0; i<(n/2); i++){
    if(s[i] < s[n-i-1]){
        return true; 
    }
   }
   return false;
}

bool allChSame(string s, int n){
    for(int i=1; i<n; i++){
        if(s[0]!=s[i]){
            return false;
        }
    }
    return true;
}

int main(){

    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        string s;
        cin >> s;

        if(n==1 || allChSame(s, n)){
            cout << "NO" << endl;
        }else if(k>0){
            cout<< "YES" <<endl;
        }else if(alreadyUni(s, n)){
            cout<< "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}