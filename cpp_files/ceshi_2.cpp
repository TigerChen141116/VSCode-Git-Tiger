#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector < ll > v;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n, m;
    cin >> n >> m;
    ll x, y, z, o = 0, t = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        t += v[i];
    }
    while (m--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> y >> z;
            y--;
           	int k = (o + y) % n;
            if (k < 0) k += n;
            t = t - v[k] + z;
            v[k] = z;
            cout << t << endl;
        }
        else
        {
            cin >> y;
            o = (o - y) % n;
            if (o < 0) o += n;
            cout << t << endl;
        }
    }
	return 0;
}