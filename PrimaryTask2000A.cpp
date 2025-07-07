#include <iostream>
using namespace std;


int main () {

    int t, n;
    cin>> t;
    string s;

    while(t--){
        cin>> s;
        n = s.length();
        
        if(s[0]=='1' && s[1]=='0' && s[2]!='0'){
            if(s[2]!='0' && n>3){
                cout << "YES" << endl;
            }else if(n==3 && s[2]!='1'){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }

    }


    return 0;
}