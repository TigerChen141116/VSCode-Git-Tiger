#include <bits/stdc++.h>
using namespace std;
int a[100005];
double b[100005];
bool cmp (int x, int y)
{
	return x > y;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	double x;
	cin >> n >> m;
	int t = 0;
	long double ans = 0;	
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++)
		cin >> b[i];
	sort (a + 1, a + n + 1, cmp);//前ok
	//for (int i = 1; i <= m; i++) cout << a[i] << " ";
	for (int i = 1; i <= m; i++)
	{
		ans += a[i] * 1.0;
		ans *= b[i] * 1.0;
	}
	cout << fixed << setprecision(1) << ans << endl;
	return 0;
}