#include <bits/stdc++.h>
using namespace std;
int a[105];
void cz(int x[], int n)
{
	int maxn = -1, f = 0;
	for(int i = 1; i <= n; i++) 
		if(a[i] > maxn && i > f)
		{
			maxn = a[i];
			f = i;
		}
	int minn = INT_MAX;
	for (int i = 1; i <= n; i++) 
		if (a[i] < minn && a[i] != 0) minn = a[i];
	a[f] -= minn;
	
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)  cin >> a[i];
	int jsq = 0;
	while(true)
	{
		bool f = 1;
		for (int i = 1; i <= n; i++) if (a[i]) f = 0;
		if (f) break;
		cz(a, n);
		jsq++;
	}
	cout << jsq << endl;
	return 0;
}