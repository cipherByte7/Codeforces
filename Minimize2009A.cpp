#include <iostream>
using namespace std;

int main (){

      int t, a, b;
      cin >> t;
      while(t--){
        cin >> a >> b;

        cout << abs(b - a) << endl;
      }
    
    return 0;
}