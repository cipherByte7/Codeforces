#include <iostream>
#include <algorithm>
using namespace std;

int main () {

    int t;
    cin>>t;

    int n, pairs ;

    while(t--){

        cin>>n;
        pairs = 0;

        //array initialisation
        int *arr = new int [n];

        //input in arr
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        //lower limiting case 
        if(n<2){
            cout << "0" << endl;
           continue;
        }

        //sorting array
        sort(arr,arr+n);

        //counting pairs
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                pairs++;
                i++;
            }
        }

        //printing pairs
        cout << pairs << endl;

    }

    return 0;
}