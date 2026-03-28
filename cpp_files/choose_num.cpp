#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "1\n";
		return 0;
	}	
	bool a[n + 1];
	memset(a, 0, sizeof(a));
	for (int i = 2; i <= n; i++)
	{
	    if (!a[i])
		{
			for (int j = 2 * i; j <= n; j += i) a[j] = 1;
		}
	}
	int jsq = 1;
	for (int i = 2; i <= n; i++)
		if(!a[i]) jsq++;
	cout << jsq << endl;
	return 0;
}