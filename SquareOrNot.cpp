#include <iostream>
#include<string>
#include <cmath>
using namespace std;

bool isSq(int n){
    if(sqrt(n)-floor(sqrt(n))){
         return false;
    }
    return true;
}

int main() {

    int t,n;
    cin>>t;

    while(t--){
       cin>>n;
      
       string s;
       cin>>s;
        if(n==4){
        cout<<"YES"<<endl;
        continue;
       }

       if(isSq(n)){

        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
               count++;
            }
        }

        if(count == (sqrt(n)-2)*(sqrt(n)-2)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
       }
        else{cout<<"NO"<<endl;
        }


       

    }
    return 0;
}