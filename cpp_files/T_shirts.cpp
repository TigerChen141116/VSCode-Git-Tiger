#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n, ans = 0, m;
	cin >> n >> m;
	string s;
	cin >> s;
	int a = m, b = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0')
		{
			a = m;
			b = ans;
		}
		else if(s[i] == '1')
		{
			if (a > 0) a--;
			else b--;
		}
		else if(s[i] == '2')
		{
			if (b > 0) b--;
			else ans++;
		}
	}
	cout << ans;
	return 0;
}