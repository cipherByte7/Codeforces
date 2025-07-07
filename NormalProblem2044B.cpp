#include <iostream>
using namespace std;
#include <string>
int main () {

    int t;
    cin>>t;

    while(t--){
        string s;
        cin >> s;

        int l = s.length();
        
     //rotate
        for(int i=0; i<l/2; i++) {
            swap(s[i],s[l-i-1]);
        }
         
     //swap p and q
       for (int k=0; k<l; ){

        if(s[k] == 'q'){
            s[k] = 'p';
            k++;
        }

        else if (s[k] == 'p'){
            s[k] = 'q';
            k++;
        }
        else{
             k++;
        }
       
        
     }
      cout << s << endl;


    }





    return 0;
}