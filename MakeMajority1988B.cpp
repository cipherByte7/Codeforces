#include <iostream>
#include <vector>
using namespace std;

int main(){

    int t, n;
    cin >> t;
    while(t--){
        //input
        cin >> n;
        string v;
        cin >> v;
        

        int Zcount = 0, Ocount = 0;
        int reset = 1;

        for(int i=0; i<n; i++){
            if(reset && v[i]== '0'){
                Zcount++;
                reset = 0;
            }

            if(v[i]== '1'){
                reset = 1;
                Ocount++;
            }
        }

        if(Ocount> Zcount){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }


    }

    return 0;
}