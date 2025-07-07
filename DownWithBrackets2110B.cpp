#include <iostream>
using namespace std;

bool checkBalance(string s, int n){
    int count =0;
    for(int i=1; i<n-2; i++){
        if(s[i] == '('){
            count++;
        }

        if(s[i] == ')'){
            count--;
        }

        if(count < 0){
            return false;
        }

    }

    return true;
}

int main (){
    int t;
    cin >> t;

    while(t--){
        string s;
        int n;
        cin >> s;
        n = s.length();

        if(s.empty()){
            cout <<"NO"<< endl;
            continue;
        }

        if(s[0] == '(' && s[n-1] == ')'){
            if(checkBalance(s, n)){
                cout <<"NO"<< endl;
            }else{
               cout << "YES" << endl; 
            }
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}