#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main (){

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        //initialisation of 2D vector
        vector<vector <int>> a(n, vector <int> (n));

        //input in vector matrix
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }

        //getting min negative number from each diagonal and accumulating thrm together
        //using i-j for accessing each diagonal seperately
        int sum =0;
        for(int k= (1-n); k<n; k++){
            int min = INT_MAX;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i-j == k && a[i][j] < min){
                        min = a[i][j];
                    }
                }
            }
            if(min<0){
                sum = sum + min;
            }
        }

        //printing positive value accumulated sum 
        cout << sum*(-1) << endl;
        


    }

    return 0;
}
