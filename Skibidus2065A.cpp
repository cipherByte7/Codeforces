#include <iostream>
using namespace std;

int main() {

    int t;
    cin>> t;

    while(t--){
        string s;
        cin>> s;
        int n = s.length();

        s.erase(n-2, 2);
        s.push_back('i');

        cout<< s << endl;
    }

    return 0;
}