#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    //input done

    vector <int> ans(2*n);
    ans[2*n-1] = n;
    ans[n-1] = n; 
    //placing largest number first having maximum 
    //distance and then arranging other elements in their respective gaps


    int i = n-1;
    int j = n-1;
    int element = 0;
    int count = n-1;

    while(count > 0){
        i++;
        j--;
        element++;
        
        ans[i] = element;
        ans[j] = element;
        
        count--;
    }

    for(int k=0; k<2*n; k++){
        cout << ans[k] << " ";
    }cout << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}