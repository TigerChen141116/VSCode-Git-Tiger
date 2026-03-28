#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n;
	cin >> n;
	char a[n + 1][n + 1];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i != j)
			{
				if (a[i][j] == 'W' && a[j][i] != 'L')
				{
					cout << "incorrect" << endl;
					return 0;
				}
				else if (a[i][j] == 'L' && a[j][i] != 'W')
				{
					cout << "incorrect" << endl;
					return 0;
				}
				else if (a[i][j] == 'D' && a[j][i] != 'D')
				{
					cout << "incorrect" << endl;
					return 0;
				}
			}
	cout << "correct" << endl;
	return 0;
}