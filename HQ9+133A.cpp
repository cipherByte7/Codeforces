#include <iostream>
using namespace std;

int main() {

    string s ;
    cin>> s;
    
    int n = s.length();

    for(int i=0; i<n; i++){
       if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
        cout<<"YES";
        return 0;
       }
    }
    cout<<"NO";

    return 0;
}