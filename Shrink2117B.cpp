#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> arr;


    for(int i=0; i<n; i+=2){
        arr.push_back(i+1);
    }

    if(n%2==0){
        for(int i=n-1; i>0; i-=2){
             arr.push_back(i+1);
        }
    }else{
        for(int i=n-2; i>0; i-=2){
             arr.push_back(i+1);
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}