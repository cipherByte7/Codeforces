#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int t, n, countD1, countD2;
    cin >> t;
    

    while(t--){
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        countD1 = 0; countD2 = 0;

        //counting diagonal elements which are 1;
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                if(a[i]=='1'){
                    countD1++;
                }
                if(b[i]=='1'){
                    countD2++;
                }
            }else{
                if(a[i] == '1'){
                    countD2++;
                }
                if(b[i] == '1'){
                    countD1++;
                }
            }
        }
        
        if(n%2 == 0){
            if(countD1 <= n/2 && countD2 <= n/2){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            if(countD1 <= (n/2) && countD2 <= (n/2)+1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }


    }

    return 0;
}