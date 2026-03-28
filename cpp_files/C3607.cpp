#include <bits/stdc++.h>
using namespace std;
vector < int > v;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	while (v.size() > 0)
	{
		int ans1 = INT_MIN, f1;
		for (int j = 0; j < v.size(); j++) 
		{
			if (v[j] > ans1)
			{
				ans1 = v[j];
				f1 = j;
			}
		}
		v.erase(v.begin() + f1);
		cout << ans1 << '\n';
		int ans = INT_MAX, f2;
		if (v.size() == 0) break;
		for (int j = 0; j < v.size(); j++) 
		{
			if (v[j] < ans)
			{
				ans = v[j];
				f2 = j;
			}
		}
		cout << ans << '\n';
		v.erase(v.begin() + f2);
	}
	// if (v.size() == 0) printf ("%d\n", v[0]);
	return 0;
}