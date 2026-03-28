#include <bits/stdc++.h>
using namespace std;
int a[3005];
bool vis[3005];
int dg(int n)
{
	if (n == 1) return 1;
	else if (!vis[a[n - 1] - n] && a[n - 1] - n > 0) return a[n - 1] - n;
	else return a[n - 1] + n;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a[i] = dg(i);
		vis[a[i]] = 1;
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++) cout << a[i] << " ";
	return 0;
}