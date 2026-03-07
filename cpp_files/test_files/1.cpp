#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, maxn = INT_MIN, ans = INT_MAX, x;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		s = to_string(x);
		if ((s[0] - '0') + (s[s.size() - 1] - '0') >= maxn && s[0] != '0')// && x < ans)
		{
			if ((s[0] - '0') + (s[s.size() - 1] - '0') == maxn && x >= ans) maxn = (s[0] - '0') + (s[s.size() - 1] - '0');
			else 
			{
				maxn = (s[0] - '0') + (s[s.size() - 1] - '0');
				ans = x;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}