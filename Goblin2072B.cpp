#include <iostream>
using namespace std;



int main () {

    long long t, n, one, zero ;
    long long ans;
    cin>>t;
    string s;

    while(t--){
        //input n and s
        cin>> n;
        cin>> s;

        //initialise(reseting) one and zero
        one = 0;
        zero= 0;

        //count 1 and 0
        for(int i=0; i<n; i++){
            if(s[i]=='-'){
                one++;
            }else{
                zero++;
            }
        }

        //limiting case (to make substring of 101)
        if(one<2 || zero<1){
            cout<< "0" << endl;
            continue;
        }

        //for even ones
        if(one%2==0){
            one = one/2;
            ans = (one*one*zero);
            cout << ans << endl;
            continue;
        }else{//odd ones
            one = one/2;
            ans = (one*(one+1)*zero);
            cout << ans << endl;
            continue;
        }
    }
    return 0;
}