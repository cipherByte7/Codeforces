#include <iostream>
using namespace std;

int main () {

    int a,b;
    cin>>a>>b;

    if(a==b){
        cout<<"1";
        return 0;
    }
  
    int ans=0;

    while(a<=b){ 
         a= a*3;
         b=b*2;
         ans++;
    }

    cout<<ans<<endl;


    return 0;
}