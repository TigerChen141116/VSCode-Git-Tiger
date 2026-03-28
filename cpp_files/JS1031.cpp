#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[4][n + 1];
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	int jsq = 0;
	for (int i = 1; i <= n; i++)
	    for (int j = 1; j <= n; j++)
	        if (a[1][i] == a[2][a[3][j]]) jsq++;
	cout << jsq;
	return 0;
}