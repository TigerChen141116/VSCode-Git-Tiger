#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n;
	cin >> n;
	if(n == 1)
	{
		int x;
		cin >> x;
		cout << x;
		return 0;
	}
	else if(n == 2)
	{
		int a, b;
		cin >> a >> b;
		cout << __gcd(a, b);
		return 0;
	}
	int a[n + 1];
	for (int i = 1; i <= n; i++) cin >> a[i];
	int ans = __gcd(a[1], a[2]);
	for (int i = 3; i <= n; i++)
		ans = __gcd(ans, a[i]);
	cout << ans;
	return 0;
}