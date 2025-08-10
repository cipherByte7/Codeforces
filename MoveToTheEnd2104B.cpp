#include <iostream>
#include <vector>
using namespace std;

int getMax(vector <int> a, int e){
    int max =0;
    for(int i=0; i<=e; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}

void solve(){
    int n;
    cin >> n;

    vector <int> a(n+1);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    a[n] = 0;

     
    int k = n;
    
    long long SumAns=0;
    while(k--){
        
        //adding last k-1 elements initially
        SumAns = SumAns + a[k+1];

        //max element adding
        SumAns = SumAns + getMax(a, k);

        cout << SumAns << " " ;

        SumAns = SumAns - getMax(a, k);

    } cout << endl;


}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}