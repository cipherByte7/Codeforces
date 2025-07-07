#include <iostream>
using namespace std;

int main () {

    int t, n, ans, value;
    cin>>t;

    string s;


    while(t--){

        //variable initiallisation
        value = 48;
        ans = 0;

        //input n and string s
        cin>> n;
        cin>> s;

        //new dynamic array
        int *arr = new int[n];

        //copying elements of strings into array
        for(int i=0; i<n; i++){
            arr[i]=s[i];
        }

        //checking how many times values are changed
        for(int i=0; i<n; i++){
            if(arr[i]!=value){
                ++ans;

                if(value==49){
                    value = 48;
                }if(value==48){
                    value = 49;
                }
            }
        }

        cout<< ans << endl;

    }

    return 0;
}