#include <iostream>
using namespace std;

void NoOfOps(int n, int k, int p){

    int count=0, sum=0;

    if(n*p < abs(k)){
        cout << "-1"<< endl;
        return ;
    }

    if(n*p >= abs(k)){
        while(sum < abs(k)){
            sum = sum + p;
            count++;     
        }
        cout<< count << endl;
    }


}

int main() {

    int t, n, k, p;
    cin>>t;

    while(t--){
        cin>>n;
        cin>>k;
        cin>>p;

        NoOfOps(n, k, p);

    }

    return 0;
}