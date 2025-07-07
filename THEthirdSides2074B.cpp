#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {

    int t, n, vSize;
    cin >> t;

    while(t--){
        cin >> n;
        vector <int> v(n);

        //input vector
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        //sort
        sort(v.begin(), v.end());


        vSize = v.size();
        

        while(vSize > 1){
            v.push_back(v[0]+v[1]-1);
            v.erase(v.begin(), v.begin()+2);
            vSize--;
        }

        cout << v[0] << endl;
        v.clear();
    }
    return 0;
}