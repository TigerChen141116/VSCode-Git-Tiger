#include <bits/stdc++.h>
using namespace std;
int dg (int n, int m)
{
    if(m == 0) return n;
    else return dg(m, n % m);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n, m;
    cin >> n >> m;
    cout << dg(n, m);
	return 0; 
}