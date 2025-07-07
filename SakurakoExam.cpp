#include <iostream>
using namespace std;

bool iseven(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isodd(int x)
{
    if (x % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int t;
    cin >> t;
    int a, b;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

       if(isodd(a)){
        cout<<"NO"<<endl;
        continue;
        
       }

       if(isodd(b)&& a>=2 && iseven(a)){
        cout<<"YES"<<endl;
        continue;
        
       }

       if(iseven(a) && iseven(b)){
        cout<<"YES"<<endl;
        continue;
       
       }
       else{
        cout<<"no"<<endl;
       }
    }

    return 0;
}