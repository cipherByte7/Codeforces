#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, m, k;
    //input all data
    cin >> n >> m >> k;
    vector <int> am(m);
    vector <int> ak(k);
    vector <int> ans(m, 0); 

    for(int i=0; i<m; i++){
        cin >> am[i];
    }

    for(int i=0; i<k; i++){
        cin >> ak[i];
    }
    //All input done


    //taking care for extreme conditions
    if(n>k+1){
        for(int i=0; i<m; i++){
            cout << "0";
        }
        cout<< endl;
        return;

    }

    if(n == k){
        for(int i=0; i<m; i++){
            cout << "1";
        }
        cout<< endl;
        return;
    }

    //for most working case where n == k+1
    int bestListIndex = -1; // find missing number from ak and stroe it in best list int

    vector <int> hash(n, 0); // making a hash table to see which questions are we able to solve in exam

    for(int i=0; i<k; i++){
        hash[ak[i]-1]++;
    }

    for(int i=0; i<n; i++){
        if(hash[i] == 0){
            bestListIndex = i; //input index for which we can ans all except that question
        }
    }

    ans[bestListIndex]++;


    //print ans 
    for(int i=0; i<m; i++){
        cout << ans[i];
    }cout << endl;
    return;

}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}