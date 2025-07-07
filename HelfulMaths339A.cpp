#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,j,n;
    string s;
    cin>>s;

    n=s.length();
    for(i=0; i<n; i+=2)
    { 
        for(j=i+2; j<n; j=j+2)
        {
            if(s[i]>s[j])
            {
                swap(s[i],s[j]);
            }
        }
    }
    cout<<s<<endl;

    return 0;
}