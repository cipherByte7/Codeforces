#include <iostream>
using namespace std;

int main(){

    int t, n, m, k, x, y;
    cin >> t;

    while(t--){
        cin >> n >> m >> k;
        int *arr = new int[n];

        //filling array from n to 1 (decreasing order)
        for(int i=n; i>0; i--){
            arr[i-1] = n-i+1;
        }

        x = n-m;
        y = n-1;

        // sorting last m elements
        while(x<y){
            swap(arr[x], arr[y]);
            x++;
            y--;
        }

        //printing final array
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;   
}