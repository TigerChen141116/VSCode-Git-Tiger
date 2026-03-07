#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int jsq = 0;
		for (int i = 2; i * i <= n; i++)
			if(n % i == 0)
			{
				jsq++;
				while (n % i == 0) n /= i; 
			}
		if (n > 1) jsq++;
		if (jsq == 2) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}