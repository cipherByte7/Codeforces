#include <iostream>
using namespace std;

void solve(){
    int l, r, L ,R;
    cin >> l >> r;
    cin >> L >> R;

    //no overlapping of segments
    if(r<L || R<l){
        cout << "1" << endl;
        return;
    }

    //partial overlapping
    if((l<L && r<R) || (L<l && R<r)){
        cout << min(r, R) - max(l, L) + 2 << endl; ;
        return;
    }

    //fully overlapping
    int count =0;
    if(l == L)count++;
    if(r == R)count++;//for extreme doors on 1 and 100th position

    
    if((L<=l && R>=r) || (l<=L && r>=R)){
        cout << min(r,R) - max(l, L) + 2 - count  << endl;
    }

}

int main(){

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
