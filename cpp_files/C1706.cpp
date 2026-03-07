#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
int dzs (string a, int p)
{
	long long sum = 0;
	for (int i = 0; i < a.size(); i++)
	{
	    if (isdigit(s[i])) sum = sum * p + s[i] - '0';
		else sum = sum * p + (s[i] - 'A' + 10);
	}
	return sum;
}
string szd (long long a, int p)
{
	string sum = "";
	while (a)
	{
		if (a % p < 10) sum += (a % p + '0');
		else sum += (a % p - 10 + 'A');
		a /= p;
	}
    reverse(sum.begin(), sum.end());
	return sum;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	cin >> s;
	cin >> m;
	cout << szd(dzs (s, n), m);
	return 0;
}