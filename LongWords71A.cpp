#include <iostream>
#include <string>
using namespace std;

int main (){

    int n;
    cin>>n;

    string s;

    for(int i=0; i<n; i++){
        cin >> s;
        if(s.length()>10){
            char last = s.back();
            int size = s.length()-2;
            s.erase(s.begin()+1,s.end());
            s.push_back(size + '0');
            s.push_back(last);

        }
        cout<<s;
    }
    

    return 0;
}