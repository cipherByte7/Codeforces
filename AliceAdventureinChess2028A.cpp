#include <iostream>
using namespace std;

int main() {

    int t, a, b, n, x, y, count;
    cin >> t;

    while(t--){
        cin >> n >> a >> b;
        if(a==0 && b==0){
            cout << "YES" << endl;
            continue;
        }
        x=0; y=0; count=0; 
        string s;
        cin >> s;

        //its sure that if alice repeats her path 100 times and still not meet red queen then she will never going to succeed
        for(int i=0; i<500; i++){
            if(s[i%n] == 'N'){
                y++;
            }else if(s[i%n] == 'E'){
                x++;
            }else if(s[i%n] == 'W'){
                x--;
            }else{
                y--;
            }

            if(a==x && b==y){
                cout << "YES" << endl;
                count++;
                break;
            }
        }

        if(count==0){
            cout << "NO" << endl;
        }

    }

    return 0;
}
