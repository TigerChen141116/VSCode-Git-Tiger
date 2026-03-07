#include <bits/stdc++.h>
using namespace std;
int a[1000001], cnt = 0;//a[i] = 0;
bool p[1000001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) 
	{
		if (!p[i]) a[++cnt] = i;
		for (int j = 1; j <= cnt && i * a[j] <= n; j++)
		{
		    p[i * a[j]] = 1;
		    if (i % a[j] == 0) break;
		}
	}
	cout << cnt;
	return 0;
}