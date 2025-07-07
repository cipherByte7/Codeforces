#include <iostream>
using namespace std;

int main () {

    int t;
    cin>>t;
    int n,a,b,c;
    

    while (t--){

        cin>>n>>a>>b>>c;
        int ans = 0, d =0, sum = a+b+c;

        ans = (n / sum)*3;
        d = n % sum;

        if(d==0)
        cout << ans << endl;

        else if(d<=a){
            cout<< ans+1<< endl;
        }

        else if(d<=a+b){
            cout<< ans+2<< endl;
        }

        else {
            cout << ans +3 << endl;
        }


        



        
    }  

    return 0;
}