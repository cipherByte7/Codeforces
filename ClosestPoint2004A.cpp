#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int n=0;
        cin>>n;
        int arr[100];
         
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        
        
        if((n == 2 && (arr[1] - arr[0] > 1 || arr[1] - arr[0] < -1))){
            cout<<"YES"<<endl;
        }else{cout<<"NO"<<endl;}
        

    }

    return 0;
}