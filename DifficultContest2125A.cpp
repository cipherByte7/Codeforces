#include <iostream>
using namespace std;


void solve(){
    string s, ans;
    int T=0, F=0, N=0;
    cin >> s;

    int n = s.length();

    for(int i=0; i<n; i++){
        if(s[i] == 'T'){
            T++;
        }
        if(s[i] == 'F'){
            F++;
        }if(s[i] == 'N'){
            N++;
        }
    }

    for(int i=0; i<T; i++){
        ans.push_back('T');
    }
    for(int i=0; i<F; i++){
        ans.push_back('F');
    }
    for(int i=0; i<N; i++){
        ans.push_back('N');
    }

    for(int i=0; i<n; i++){
        if(s[i] != 'T' && s[i] != 'F' && s[i] != 'N'  ){
            ans.push_back(s[i]);
        }
    }
   
    cout << ans << endl;

    return;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}