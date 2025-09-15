#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector <int> a(n);
    vector <int> oddv;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    // input done

    long long odd=0;

    //count odd
    for(int i=0; i<n; i++){
        if(a[i]%2 != 0){
            odd++;
        }
    }

    // zero odd field
    if(odd == 0){
        cout << "0" << endl;
        return;
    }

    long long ans = 0;

    

    if(odd == 1){
        for(int i=0; i<n; i++){
            ans = ans + a[i];
        }

        cout << ans << endl;
        return;
    }


    //case 3 (more than 1 odd fields)
    for(int i=0; i<n; i++){
        if(a[i] %2 != 0){
            oddv.push_back(a[i]);
            a[i] = 0;
        }
    }

    sort(oddv.begin(), oddv.end());

    for(int i=0; i<n; i++){
        ans += a[i];
    }

    int z = oddv.size();

    for(int i=z/2; i<z; i++){
        ans += oddv[i];
    }


    cout << ans << endl;
    
    
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
} 