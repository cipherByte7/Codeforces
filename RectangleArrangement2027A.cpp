#include <iostream>
using namespace std;

int main () {

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int w=0, h=0;
        int maxW = 0, maxH = 0;

        //input rectangles and storing maximum
        for(int i=0; i<n; i++){
            cin >> w >> h;
            if(maxW < w){
                maxW = w;
            }
            if(maxH < h){
                maxH = h;
            }
        }

        cout << 2*(maxH + maxW) << endl;
    }
    return 0;
}