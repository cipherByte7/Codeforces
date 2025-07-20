#include <iostream>
#include <vector>
using namespace std;

int main(){

    int t;
    cin >> t;
    long long n, f, a, b;

    while(t--){
        cin >> n >> f >> a >> b;

        vector <long long> m(n+1);
        m[0]=0;
        //input moments
        for(int i=1; i<=n; i++){
            cin >> m[i];
        }


        for(int i=0; i<n; i++){
            if((m[i+1] - m[i])*a > b){
                f = f - b;
            }else{
                f = f - ((m[i+1] - m[i])*a);
            }
        }

        if(f>0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}