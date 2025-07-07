#include <iostream>
using namespace std;
 
int main(){
    int n, a1,a2,a3;
    int count =0;

    cin>>n;
    
    
    while(n--){

        cin >> a1>>a2>>a3 ;

        if(a1+a2+a3 >=2){
            count++;
        }
        

    }

    cout << count<< endl;
    return 0;
}