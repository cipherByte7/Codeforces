#include <iostream>
using namespace std;

void fizzbuzz(int n){

    int count=1, mod=0;

    if(n==0){ 
        cout<< count << endl;
        return ;
    }

    mod = n%15;
    count = n/15;
    count = count*3;

    if(mod == 0){
        cout<< count+1 <<endl;
    }
    if(mod == 1){
        cout<< count+2 <<endl;
    }
    if(mod >= 2){
        cout<< count+3 <<endl;
    }
    
}

int main (){

    int t, n;
    cin>>t;

    while(t--){
        cin>>n;
        fizzbuzz(n);
    }

    return 0;
}