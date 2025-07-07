#include <iostream>
#include <vector>
using namespace std;


bool AllLeftLarge(vector <int> a, int j){
    int count=0;
    for(int i=0; i<j; i++){
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

bool AllRightSmall(vector <int> a, int j, int n){
    int count=0;
    for(int i=j+1; i<n; i++){
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

int main (){

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        vector <int> a(n);
        vector <int> b(n);

        //input vector
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        //update vector b
        for(int i=1; i<n-1; i++){
            if(AllLeftLarge(a, i)){
                b[i] = 1;
            }else if(AllRightSmall(a,i,n)){
                b[i] = 1; 
            }else{
                b[i] = 0;
            }
        }
        //always 1
        b[0] = 1;
        b[n-1] = 1;


        //print vector b
        for(int i=0; i<n; i++){
            cout << b[i] ;
        }
        cout<< endl;
    }

    return 0;
}