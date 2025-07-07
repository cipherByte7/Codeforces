#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    long long n, s, dx, dy, x, y;
    int count;

    while(t--){
        cin >> n>> s;
        count = 0;

        for(int i=0; i<n; i++){
    
            cin>> dx>> dy>> x>> y;


            if(x==y){
                if((dx>0 && dy>0) || (dx<0 && dy<0)){
                 count++;
                }
            }

            if(x+y == s ){
                if((dx>0 && dy<0) || (dx<0 && dy>0)){
                     count++;
                }
            }
        }

        cout << count << endl;
    }


    return 0;
}