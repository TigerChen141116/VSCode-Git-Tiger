#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n, x, maxn = INT_MIN, f1 = 0, minn = INT_MAX, f2 = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			if (x > maxn)
			{
				maxn = x;
				f1 = i;
			}
			if (x <= minn)
			{
				minn = x;
				f2 = i;
			}
		}
		cout << f1 << " " << f2 << "\n";
	}
	return 0;
}