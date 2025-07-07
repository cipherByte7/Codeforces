#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> s;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int k = 2; k < n; k++)
        {
            int i = 0, j = i + 1;
            int sum = a[i] + a[j];
            while (i < j && i < k - 1 && j < k)
            {
                if (sum < a[k])
                {
                    j++;
                    sum = sum + a[j];
                }
                else if (sum == a[k])
                {
                    s.insert(a[k]);
                }
                else
                {
                    sum = sum - a[i];
                    i++;
                    sum += a[i];
                }
                if (i == j)
                {
                    sum = sum - a[j];
                    j++;
                    sum = sum + a[j];
                }
            }
        }
        for (int k = n - 3; k > -1; k--)
        {
            int i = n - 1, j = i - 1;
            int sum = a[i] + a[j];
            while (j < i && i > k - 1 && j > k)
            {
                if (sum < a[k])
                {
                    j--;
                    sum = sum + a[j];
                }
                else if (sum == a[k])
                {
                    s.insert(a[k]);
                }
                else
                {
                    sum = sum - a[i];
                    i--;
                    sum += a[i];
                }
                if (i == j)
                {
                    sum = sum - a[j];
                    j--;
                    sum = sum + a[j];
                }
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}