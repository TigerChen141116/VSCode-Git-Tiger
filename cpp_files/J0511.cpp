#include <bits/stdc++.h>
using namespace std;
int a[10000005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, jsq = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
    sort (a + 1, a + n + 1);
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j++)
		{
			if (i == j) continue;
			if (a[j] - a[i] + 1 <= m) jsq++;
            else break;
		}
	cout << jsq << endl;
	return 0;
}