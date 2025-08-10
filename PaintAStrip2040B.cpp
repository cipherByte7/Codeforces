#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector <int> c;
    int a = 4, b = 6;
    while(a <= 1000000){
        c.push_back(a);
        a= a+(b);
        b=b*2;
    }

    while(t--){
        int n;
        cin >> n;

        if(n==1){
            cout << "1" <<endl;
            continue;
        }

        int size = c.size();

        for(int i=0; i<size; i++){
            if(n<=c[i]){
                cout << i + 2 << endl;
                break;
            }
        }
        
    }
}
