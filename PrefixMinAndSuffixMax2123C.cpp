#include <iostream>
#include <vector>
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

bool isMin(vector <int> a, int j, int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] < a[j]){
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

int main (){

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        vector <int> a(n);
        vector <int> b(n);

        //input vector a
        for(int i=0; i<n; i++){
            cin >> a[i];
        }


        //update vector b
        for(int i=1; i<n-1; i++){
            if(isMax(a, i, n) || isMin(a, i, n)){
                b[i] = 1;
            }else{
                b[i] = 0;
            }
        }


        b[0] = 1;
        b[n-1] = 1;

        //Print vector b
        for(int i=0; i<n; i++){
            cout << b[i] ;
        }
        cout<< endl;
    }

    return 0;
}