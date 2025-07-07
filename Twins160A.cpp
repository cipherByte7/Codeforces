#include <iostream>
#include<algorithm>
using namespace std; 

int main() {
     
     int n;
     cin>>n;

     if(n==1){
        cout<<"1";
        return 0;
     }

     int arr[n];

     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     
      sort(arr, arr+n);
      int sum=0;

     for(int i=0; i<n; i++){
        sum = sum+arr[i];
     }

     int sum2=0, count=0;
    
     for(int i=n-1; i>=0; i--){
         sum2= sum2 +arr[i];
         count++;

         if(sum2>sum/2){
            cout <<count ;
            break;
         }
     }



    return 0;
}