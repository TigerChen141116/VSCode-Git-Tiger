#include <bits/stdc++.h>
using namespace std;
vector < int > v1, v2;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, x, jsq = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		v1.push_back(x);
	}
	for (int i = 1; i <= m; i++)
	{
		cin >> x;
		v2.push_back(x);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < m; j++)
	    {
			if (v1[i] >= v2[j]) 
			{
				jsq++;
				v1.erase(v1.begin() + i);
				v2.erase(v2.begin() + j);
			}
			else v1.erase(v1.begin() + i);
		}   
	}
	cout << jsq << endl;
	return 0;
}