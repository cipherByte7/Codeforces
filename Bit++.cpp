#include <iostream>
using namespace std;
int main() {
   
   int x=0;
   int n;
   cin>>n;
   
   for(int i=0; i<n; i++){
       string line;
       cin>>line;

       
       if(line[1]=='+'){
           x++;
 
       }else if(line[1]=='-'){
           --x; 
       }
   }

   
   return 0;
}