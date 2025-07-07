//RUNTIME ERROR CODE
#include <iostream>
using namespace std;

int main () {

    int t, n, k, i, j, m;
    //t -> test cases
    //n -> size of array
    //k -> window size
    //i -> placement of smallest integers starting from 1
    //j -> integers from 1 to n
    //m -> iterator to place first smallest integers and them placing remaining integers randomly 

    cin >> t;
    
    while(t--){
        
        cin >> n >> k;
        int *arr = new int(n);

        //all elements zero
        for(int b=0; b<n; b++){
            arr[b]=0;
        }

        i = k-1;
        j=1;
        m=0;

        //placing min elements in window
        while(i<n){
            arr[i] = j;
            j++;
            i = i+k;
        }

        //placing remaining integers randomly
        while(m<n){
            if(arr[m] != 0){
                m++;
                continue;
            }
            arr[m] = j;
            m++;
            j++;
        }

        //printing array 
        for(int a=0; a<n; a++){
            cout << arr[a] << endl;
        }

    }
    return 0;
}