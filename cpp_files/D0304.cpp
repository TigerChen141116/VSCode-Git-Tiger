#include <bits/stdc++.h>
using namespace std;
struct node
{
	int x, y;
}a[10005];

bool cmp(node a, node b)
{
	if (a.x != b.x)return a.x < b.x;
	else return a.y < b.y;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i].x >> a[i].y;
	}
	sort(a + 1, a + n + 1, cmp);
	for(int i = 1; i <= n; i++)
	{
		cout << a[i].x << " " << a[i].y << "\n";
	}	
	return 0;
}