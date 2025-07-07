#include <iostream>
using namespace std;

void gameOfDiv(int arr[], int n, int k)
{
    bool ans;
    int index;

    if(n==1 ){
        cout << "YES" << endl;
        cout << "1" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                continue;
            }

            if ((abs(arr[i] - arr[j])) % k == 0)
            {
                ans = true;
                break;
            }
            else
            {
                ans = false;
                index = i + 1;
            }
        }
        if (ans == false)
        {
            cout << "YES" << endl;
            cout << index << endl;
           
            break;
        }else if(i==(n-1)){
            cout << "NO" << endl;
            break;

        }
       
    }
}
int main()
{

    int t, n, k;
    cin >> t;

    while (t--)
    {

        cin >> n;
        cin >> k;

        // array declare and input
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        gameOfDiv(arr, n, k);
    }

    return 0;
}