#include <iostream>
using namespace std;

int cost(string s, int n)
{
    int one = 0;
    int zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                one--;
            }
            else
            {
                zero--;
            }

            if (zero < 0)
            {
                return one;
            }
            if (one < 0)
            {
                return zero;
            }
        }
    
    return 0;
}
int main()
{

    int t, n;
    cin >> t;
    string s;

    while (t--)
    {
        cin >> s;
        n = s.length();
        cout << cost(s, n) << endl;
        ;
    }

    return 0;
}