#include <iostream>
using namespace std;

bool isEqual (int arr[], int n){
    for (int i=0; i<n-1; i++){
        if(arr[i-1]== 1 && arr[i] == 0 && arr[i+1]==1 ){
            return true;
        }
    }
    return false;
}

int main () {

    int t,n;
    cin>> t;

    while(t--){
        cin>>n;
        int *arr = new int [n];

        for(int j=0; j<n-2; j++){
            cin>> arr[j];
        }

        if(isEqual(arr, n)){
            cout<<"NO"<< endl;
        }else{
            cout<<"YES"<< endl;

        }
    }



    return 0;
}