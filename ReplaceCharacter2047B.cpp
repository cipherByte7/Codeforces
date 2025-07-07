#include <iostream>
using namespace std;

int maxArr(int arr[]){
    int max = 0;
    for(int i=0; i<26; i++){
        if(max <= arr[i]){
            max = i;
        }
    }
    return max;
}

int minArr(int arr[]){
    int min = 100; //Any greater value than 10
    for(int i=0; i<26; i++){
        if(min > arr[i] ){
            min = i;
        }
    }
    return min;
}

int main () {

    int t, n, max, min;
    cin >> t;
    string s;

    while(t--){
        
        cin >> n;
        cin >> s;

        int arr[26] = {0};

        //updating count array
        for(int i=0; i<n; i++){
            arr[s[i]-'a']++;
        }

        for(int i=0; i<26; i++){
            cout << arr[i] << endl;
        }

        max = maxArr(arr);
        min = minArr(arr);

        cout << max <<" max" << endl;
        cout << min <<" min"<< endl;


        //replacing character
       char maxAlpha = max + 'a';
       char minAlpha = min + 'a';

       for(int i=0; i<n; i++){
            if(s[i]==maxAlpha){
                for(int j=0; j<n; j++){
                    if(s[j]==minAlpha){
                        s[j]=s[i];
                        break;
                    }
                }
                break;
            }
       }


        //print string
        cout << s << endl;
    }
    return 0;
}