#include <bits/stdc++.h>
using namespace std;
vector < int > v;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, o, x;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	for (int i = 1; i <= m; i++)
	{
		cin >> o;
		if (o == 1) 
		{
			cin >> x;
			v.push_back(x);
		}
		else if (o == 2) v.pop_back();
	}
	if (!v.size()) cout << "null" << endl;
	else 
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
	}
	return 0;
}