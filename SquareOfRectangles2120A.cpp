#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    int l1, l2, l3, b1, b2, b3;
    double s;

    while(t--){
        int A=0, B=0, C=0, D=0;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        // s = (l1*b1)+(l2*b2)+(l3*b3);
        // s = sqrt(s);

        if(l1==l2 && l2==l3 && b1+b2+b3 == l1){
            A++;
        }

        if(b1==b2 && b2==b3 && l1+l2+l3 == b1){
            B++;
        }

        if(l2+l3 == l1 && b1+b2 == l1){
            C++;
        }

        if(b2+b3 == b1 && l1+l2 == b1){
            D++;
        }

        if((A || B || C || D)){
            cout <<"YES" << endl;
        }else{
            cout<< "NO" <<endl;
        }


    }

    return 0;
}