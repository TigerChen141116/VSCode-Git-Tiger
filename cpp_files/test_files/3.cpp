#include <bits/stdc++.h>
using namespace std;
vector < int > v;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, x;
	cin >> n >> m;	
	for (int i = 1; i <= n; i++) 
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	while (v[n - 1] - v[0] > m) 
	{
		v.pop_back();
		n--;
	}
	cout << n << endl;
	return 0;
}