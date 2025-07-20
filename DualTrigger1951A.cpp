#include <iostream>
using namespace std;

int main(){

    int t, n, count;
    cin >> t;

    while(t--){

        cin >> n;
        string s;
        cin >> s;

        count = 0; bool Notok = false;

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                count++;
            }

            if(s[i] == s[i+1] && s[i] == '1'){
                Notok = true;
            }
        }
        
        //if 1s are odd then its directly no
        if(count%2 != 0){
            cout << "NO" << endl;
            continue;
        }

        if(count ==2 && Notok){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;


    }

    return 0;
}