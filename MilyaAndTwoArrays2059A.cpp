#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count(vector <int> arr, int n){
    int count=1;

    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }

    return count-1;
}


int main () {

    int t,n, countA, countB;
    cin>>t;

    while(t--){

        cin>>n;
        countA=1;
        countB=1;

        

        vector <int> a(n);
        vector <int> b(n);

        //input a
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        //input b
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        if(n==3){
            cout<< "NO"<< endl;
            continue;
        }
        //sorting arrays
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        //count
        countA = count(a,n);
        countB = count(b,n);

        if(countA+countB >3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        

    }

    return 0;
}