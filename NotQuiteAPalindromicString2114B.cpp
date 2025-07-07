#include <iostream>
#include <cmath>
using namespace std;

long long minGoodPairs(long long one, long long zero){
    return floor(abs(one - zero)/2);
}

long long maxGoodPairs(long long one, long long zero){
    return floor(one/2) + floor(zero/2);
}

int main() {

    int t;
    cin >> t;

    long long n, k, one, zero, min, max;

    while(t--){
        string s;
        cin >> n >> k;
        cin >> s;

        one = 0; zero = 0; min = 0; max = 0;

        for(int i=0; i<n; i++){
            if(s[i]== '1'){
                one++;
            }else{
                zero++;
            }
        }

        min = minGoodPairs(one, zero);
        max = maxGoodPairs(one, zero);
        //cout << min << " " << max << endl;


        if(min <= k && k <= max && (k - min)%2 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}