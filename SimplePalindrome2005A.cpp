#include <iostream>
using namespace std;


int main(){

    int t, n;
    cin >> t;
    string s = {'a', 'e', 'i', 'o', 'u'};

    while(t--){
        cin >> n;

        if(n<6){
            for(int i=0; i<n; i++){
                cout<< s[i];
            }cout << endl;
        }
        else{

            int m = n%5;
            int count = 0;
            for(int i=0; i<5; i++){
                for(int j=0; j<(n/5); j++){
                    cout << s[i];

                    if(j== (n/5)-1 && count<m){
                        cout<< s[i];
                        count++;
                    }
                }
            }
            cout << endl;
        }
        
    }

    

    return 0;
}
