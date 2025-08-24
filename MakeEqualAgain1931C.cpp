#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector <int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    //count occurences for 3 case,  starting , ending and middle.
    //case 1: starting 
    int scnt = 1;
    for(int i=0; i<n-1; i++){
        if(a[i] == a[i+1]){
            scnt++;
        }else{
            break;
        }
    }

    if(scnt == n){
        cout << "0" << endl;
        return;
    }

    //case2: ending
    int ecnt = 1;
    for(int i=n-1; i>=0; i--){
        if(a[i] == a[i-1]){
            ecnt++;
        }else{
            break;
        }
    }

    int mcnt=0;
    //case:3 to use operation in middle
    if(a[0] == a[n-1]){
        int s = 0, e = n-1;
        
            for(int i=0; i<n; i++){
                if(a[i] == a[i+1]){
                    s++;
                }else{
                    break;
                }
            }

            for(int i=n-1; i>0; i--){
                if(a[i] == a[i-1]){
                    e--;
                }else{
                    break;
                }
            }
        
        mcnt = s + 1 + n - e;
    }

    int maxOcc = max({scnt, mcnt, ecnt});
    cout << n - maxOcc << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}