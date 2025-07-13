#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;

        vector <int> a(n);
        vector <int> b(n);

        //input a
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        //input b
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        //count -1
        int count = 0;
        for(int i=0; i<n; i++){
            if(b[i]==-1){
                count++;
            }
        }
        
        int x;
        //branch if number of missing elements are less than n-1
        if(count<n){
            
            for(int i=0; i<n; i++){
                if(b[i]>=0){
                    x = b[i]+a[i];
                    break;
                }
            }

            //individual value of a[i] also should not be gerater than x
            int count2 = 0;
            for(int i=0; i<n; i++){
                if( (a[i]+b[i] == x && b[i]>-1 ) || (b[i]==-1 && (x-k) <= a[i] && a[i]<=x) ){
                    count2++;
                }
            }

            if(count2==n){
                cout << "1" << endl;
            }else{
                cout<< "0" << endl;
            }
           
        }else{
            //branch if number of missing elements in b are equal to n
            sort(a.begin(), a.end());

            int ans = a[0] + k - a[n-1] + 1;
            cout << ans << endl;
        }

        
    }
}