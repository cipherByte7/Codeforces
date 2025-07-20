#include <iostream>
#include <vector>
using namespace std;

int main(){ 

    long long t, n, ans;
    cin >> t;

    while(t--){
        cin >> n;
        ans = 0;
        vector <vector <long long>> abcd (n, vector <long long> (4));
        //input piles a b  c d
        for(int i=0; i<n; i++){
            for(int j=0; j<4; j++){
                cin >> abcd[i][j];
            }
        }

        for(int i=0; i<n; i++){
            if((abcd[i][0] > abcd[i][2]) && (abcd[i][1] > abcd[i][3])){
                ans = ans + abcd[i][0] - abcd[i][2] + abcd[i][1] - abcd[i][3];
                continue;
            }
            if(abcd[i][0] > abcd[i][2]){
                ans = ans + abcd[i][0] - abcd[i][2];
            }
            if(abcd[i][1] > abcd[i][3]){
                ans = ans + abcd[i][0] + abcd[i][1] - abcd[i][3];
            }
            
        }

        cout << ans << endl;

    }

    return 0;
}