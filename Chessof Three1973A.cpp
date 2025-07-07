#include <iostream>
 
using namespace std;
 
int main()
{
 
 
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int p1, p2, p3;
 
		cin >> p1 >> p2 >> p3;
 
		int ans = -1;
		if((p1+p2+p3)%2==0){
		    ans = (p1 + p2 + min(p1 + p2, p3)) / 2;
		}
 
		cout << ans << endl;
	}
 
	return 0;
}