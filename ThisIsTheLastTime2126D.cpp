#include <iostream>
#include <vector>     
#include <algorithm> 
using namespace std; 

bool compareColumns(const vector<int>& v1, const vector<int>& v2) {
    return v1[0] < v2[0]; 
}

int main() {

    int t, n, k;
    cin >> t;

    while(t--){

        cin >> n >> k;

        vector <vector <int>> casino(n, vector<int> (3));

        for(int i=0; i<n; i++){
            for(int j=0; j<3; j++){
                cin >> casino[i][j];
            }
        }

        //sorting casino by column 1 ie minimum cash to play casino
        sort(casino.begin(), casino.end(), compareColumns);

        for(int i=0; i<n; i++){
            if(casino[i][0] <= k && casino[i][2] >= k){
                //casino entered
                k = casino[i][2];
            }
        }

        cout << k << endl;

    }

    

    return 0;
}