#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



int main() {

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i=0; i<n; i++){
        cin>> v[i];
    }

    sort(v.begin(), v.end());

     for (auto x : v)
        cout << x << " ";



    return 0;

}
