#include <iostream>
#include <string>
using namespace std;

bool checkSame(string s){
    int ans = false;

    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            ans = true;
            return ans;
        }
    }

    return ans;

}

int main () {

    int t,size;
    cin>>t;
    string s;

    while (t--){
        cin>>s;
        size = s.length();

        if(checkSame(s)){
            cout<<"1"<<endl;
        }else{
            cout<<size<<endl;

        }
        
    }

    return 0;
}