#include <bits/stdc++.h>
using namespace std;
const int d = 2e6 + 10;
bool isl[d];
int tl[d];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int a, t;
	cin >> a >> t;
    if (a == 0) return 0;
    if (a == 1)
    {
        while (t--) cout << "lucky" << endl;
        return 0;
    }
	int st = ceil(sqrt(a));
	long long b = st * st;
	for (long long i = st; i * i <= d; i++)
	{
	    b = i * i;
		if (b > d) break;
		for (long long j = b; j <= d; j += b) isl[j] = 1;
		//b = i * i;
	}
	int la = b;
	for (int i = d - 1; i >= 1; i--)
	{
		if (isl[i]) 
		{
			tl[i] = i;
			la = i;
		}
		else tl[i] = la;
	}
	int n;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		if(isl[n]) cout << "lucky" << endl;
		else cout << tl[n] << endl;
	}
	return 0;
}