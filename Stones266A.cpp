#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;

    string str;
    cin>>str;

    int ans = 0;
    int i=0, j=1;

    while(j<n){
        if(str.at(i)==str.at(j)){
            
            ans++;
        }
        i++;
        j++;
    }


    cout<<ans<<endl;
    
    return 0;
}