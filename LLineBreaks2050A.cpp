#include <iostream>
#include <string>
using namespace std;

int main () {

    int t=0, x, sum, size, n,m;
    cin >> t;

    while(t--){

        cin>> n>> m;

        x=0; sum=0; size=0;

        for(int i=0; i<n; i++){
            string s;
            cin>>s;

            size = s.length();

            while(size <= m){
                x++;
                sum = sum + size;
            }
                cout << x << " "<< endl; 
            
        }
    }


    return 0;
}