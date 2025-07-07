#include <iostream>
using namespace std;

int main(){

    string str;
    cin >> str;
   
    int count = 1;

    for(int i=1; i < str.length(); i++ ){
        if(str[i-1]==str[i]){
            count++;
        }
       

        if(count>6){ 
               cout<<"YES"<<endl;
                
               return 0;
         }

         if(str[i]!=str[i+1]){
                  count = 1; 
        }
               
    }
        
   

    cout<<"NO"<<endl;
   
    

    return 0;
    }