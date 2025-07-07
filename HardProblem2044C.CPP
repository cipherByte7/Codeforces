#include <iostream>
using namespace std;

int main () {

    int t, a, b, c, m;
    int ans;
    cin>>t;

    while(t--){
        cin>>m>>a>>b>>c;

        if(a<=m && b<=m && a+b+c <=2*m)
        ans = a+b+c; 

        else if(a<=m && b<=m && a+b+c >=2*m)
        ans = 2*m;   

        else if(a>=m && b<=m && b+c <= m)
        ans = m + b +c;

        else if(a>=m && b<=m && b+c >= m)
        ans = m + m;

        else if(a<=m && b>=m && a+c >= m)
        ans = m + m;

        else if(a<=m && b>=m && a+c <= m)
        ans = m + a+ c ;

        else if(a>=m && b>=m )
        ans = m + m;

        cout << ans << " "<<endl;

    }




    return 0;
}