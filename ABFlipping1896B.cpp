#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int i; // to poinbt first A in string
    int j; // to point last B in string or first B of string string from last index

    for(i=0; i<n; i++){
        if(s[i] == 'A'){
            break;
        }
    }

    for(j=n-1; j>=0; j--){
        if(s[j] == 'B'){
            break;
        }
    }

    if(i>=j){
        cout << "0" << endl;
        return;
    }  

    cout << j - i << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}