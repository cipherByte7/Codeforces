#include <iostream>
#include <vector>
using namespace std;

int main (){

    int t, n, m;
    int maxR = 0, maxC = 0, a, b;
    cin >> t;

    while(t--){

        cin >> n >> m;
        vector <string> v(n);

        //input of vector strings
        for (int i=0; i<n; i++){
            cin >> v[i];
        }

        vector <int> row(n, 0);
        vector <int> col(m, 0);

        //my logic is whichever row and col has maximum # symbols, it contains the centre of circle. My complexity of code 
        //will be O(n*m)
        for(int i=0; i<n; i++){
           for(int j=0; j<m; j++){
            if(v[i][j] == '#'){
                row[i]++;
                col[j]++;
            }
           }
        }

        maxR = 0; maxC = 0;

        for(int i=0; i<n; i++){
            if(maxR < row[i]){
                maxR  = row[i];
                a = i;
            }
        }

        for(int i=0; i<m; i++){
            if(maxC < col[i]){
                maxC = col[i];
                b = i;
            }
        }

        cout << a+1 << " " << b+1 << endl;

        
    }


    return 0;
}