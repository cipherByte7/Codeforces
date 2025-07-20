#include <iostream>
#include <climits>
using namespace std;

int main (){

    int t, x, min;
    cin >> t;

    while(t--){
        min = INT_MAX;
        int digit;
        cin >> x;
        while(x>0){
            digit = x%10;
            x = x/10;
            if(min > digit){
                min = digit;
            }
        }

        cout << min << endl;
    }

    return 0;
}