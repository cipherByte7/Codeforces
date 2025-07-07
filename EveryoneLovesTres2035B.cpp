#include <iostream>
using namespace std;

bool isEven(long long n){
    if(n%2 == 0){
        return true;
    }

    return false;
}

int main(){
    int t, count;
    cin >> t;

    long long n;

    while(t--){
        cin >> n;

        if(n==1 || n==3){
            cout << "-1" << endl;
            continue;
        }

        if(isEven(n)){
            count = (n/2) - 1;
            for(int i=1; i<=count; i++){
                cout<<"33";
            }
            cout<< "66" << endl;
        }else{
            count = (n-5)/2;
            for(int i=1; i<=count; i++){
                cout<<"33";
            }
            cout<< "36366" << endl;
        }
    }
    return 0;
}