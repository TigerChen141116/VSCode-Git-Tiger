#include <bits/stdc++.h>
using namespace std;
int n, m, x, cnt[1000005], b[1000005], c[1000005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> cnt[i];
		for (int j = 1; j <= cnt[i]; j++)
		{
			cin >> x;
			b[x] = i;
		}
	}
	int ans1 = 0, ans2 = 0;
	for (int i = 1; i <= m; i++)
	{
	    cin >> x;
		c[b[x]]++;
		if (c[b[x]] == 1) ans1++;
		if (c[b[x]] == cnt[b[x]]) ans2++;
	}
	cout << ans1 << endl << ans2 << endl;
	return 0;
}