#include <bits/stdc++.h>
using namespace std;
int a[10005];
bool pss(int n)
{
	if (n < 2) return 0;
	int t = sqrt(n);
	for (int i = 2; i <= t; i++)
		if (n % i == 0) return 0;
	return 1;
}/*
void zys (int n)
{
	if (n == 1) return;
	for (int i = 2; i * i <= n; i++)
		while (n % i == 0)
		{
		    a[i]++;
			n /= i;
		}
	if (n > 1) a[n]++;
}*/
void zys(int n, int p)
{
	if (n == 1) return;
	if ( n % p == 0)
	{
		a[p]++;
		zys(n / p, p);
	}
	else return zys(n, p + 1);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n, t;
	cin >> n;
	for (int i = 2; i <= n; i++)
		zys(i, 2);
	for (int i = 2; i <= n; i++)
	{
		/* code */
		if(a[i]) cout << i << " " << a[i] << endl;
	}
	
	return 0;
}