#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isMax(vector <int> a, int j, int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] > a[j]){
            count++;
        }
    }
    if(count){
        count = 0;
        return false;
    }else{
        return true;
    }
}

int main(){
    int t, n, j, k;
    cin >> t;

   while(t--){
    cin >> n >> j >> k;
   
    vector <int> a(n);

    //input vector
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

     if(k>1){
        cout << "YES" << endl;
        continue;
    }

    if(isMax(a, j-1, n) && k>=1){
        cout <<"YES" << endl;
    }else{
        cout <<"NO" << endl;
    }

   }

    return 0;
}