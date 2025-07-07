#include <iostream>
using namespace std;

int main() {

    int t, count;
    cin >> t;
   

    while(t--){
       string s;
       cin >> s;

       count = 0;
       
       //removing terminal zeroes
       while(s[s.length()-1] == '0'){
        count++;
        s.pop_back();
       }

       //cout << s << " " << count << endl;

       //counting all non zero digits except last digit
       for(unsigned int i=0; i<s.length(); i++){
        if(s[i] != '0'){
            count++;
        }
       }

       cout << count-1 << endl;
    }

    return 0;
}

