#include <iostream >
using namespace std;

int main()
{

    int t;
    cin >> t;

    int a, b, c, d;
   
    for (int i = 0; i < t; i++)
    {   
         cin >> a >> b >> c >> d;
        if(((min(a,b) < c) && (c< max(a,b))) || ((min(a,b) < d )&&(d< max(a,b)) )){
            if(((min(a,b) < c) && (c< max(a,b))) && ((min(a,b) < d )&&(d< max(a,b)) )){
                cout<<"NO"<<endl;
            }
            else{cout<<"YES"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}