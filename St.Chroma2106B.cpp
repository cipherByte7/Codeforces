#include <iostream>
#include <vector>
using namespace std;

void printVector (vector <int> p, int n){
    for(int i=0; i<n; i++){
        cout << p[i] << " " ;
    } 
    cout << endl;
}

int main (){
    int t, n, x;
    cin >> t;

    while(t--){
        cin >> n >> x;

        vector <int> p(n);
        //input vector as 0,1,2,3...
        for(int i=0; i<n; i++){
            p[i] = i;
        }

        if(n == x){
            printVector(p, n);
        }else{
            swap(p[x], p[n-1]);
            printVector(p, n);
        }
    }
    return 0;
}