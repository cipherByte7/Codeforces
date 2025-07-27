#include <iostream>
using namespace std;
void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans =0;
    for(int i=0; i<n-2; i++ ){
        if(s[i] == 'm' && s[i+1]=='a' && s[i+2]=='p' && s[i+3] == 'i' && s[i+4]=='e'){
            ans++;
            i+=4;
        }
        else if(s[i] == 'p' && s[i+1]=='i' && s[i+2]=='e'){
            ans++;
        }else if(s[i] == 'm' && s[i+1]=='a' && s[i+2]=='p'){
            ans++;
        }
    }

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