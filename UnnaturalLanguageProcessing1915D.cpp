#include <iostream>
#include <algorithm>
using namespace std;

void revString(string &ss){
    int n = ss.size();
    for(int i=0; i<n/2; i++){
        swap(ss[i], ss[n-i-1]);
    }
}

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans;
    for(int i=n-1; i>=0; i--){
        if(s[i] == 'a' || s[i] == 'e'){
            ans.push_back(s[i--]);
            ans.push_back(s[i]);
            ans.push_back('.');
        }else{
            ans.push_back(s[i--]);
            ans.push_back(s[i--]);
            ans.push_back(s[i]);
            ans.push_back('.');
        }
    }

    ans.pop_back();

    revString(ans);

    cout << ans << endl;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}