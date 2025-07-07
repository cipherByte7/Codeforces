#include <iostream>
#include <vector>
using namespace std;



int main () {

    int t;
    cin>>t;

    while (t--){

        int n;
        cin>>n;

        int mono[100];
        for(int i=0; i<n; i++){
            cin >> mono[i];
        }

        int stereo[100];
        for(int i=0; i<n; i++){
            cin >> stereo[i];
        }

        int m= mono[n-1],s=0;

        for(int i=0; i<n-1; i++){
            if(mono[i]>stereo[i+1]){
                m = m + mono[i];
                s = s + stereo[i+1];
            }
        }
        cout<<m-s<<endl;
    }


    return 0;
}
