#include <iostream>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;

    //hash array
    int arr[26] = {0};

    for(int i=0; i<n; i++){
        arr[s[i] - 'a']++;
    }

    int oddOcc = 0; //count all odd occuring alphabets and make sure its less than 2 after removing k alphabets

    for(int i=0; i<26; i++){
        if(arr[i]%2 != 0 ){
            oddOcc++;
        }
    }

    oddOcc = oddOcc - k; //remove k elements

    if(oddOcc>1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}