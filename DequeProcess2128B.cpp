#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    string ans;


   
    for(int k=0; k<n; k++){
        cin >> a[k];
    }

    int i=0, j=n-1;

    while(i<j){
        if(a[i] < a[j]){
            ans.push_back('L');
            i++;
        }else{
            ans.push_back('R');
            j--;
        }

        if(i>=j){
            break;
        }

        if(a[i] > a[j]){
            ans.push_back('L');
            i++;
        }else{
            ans.push_back('R');
            j--;
        }
    }

    ans.push_back('R');
    cout << ans << endl;
    return;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}