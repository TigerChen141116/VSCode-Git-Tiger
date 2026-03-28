#include <bits/stdc++.h>
using namespace std;
bool isp[1000001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n;
	cin >> n;
    if (n < 2)
    {
        cout << 0;
        return 0;
    }
	int ans = 0;
	isp[0] = isp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
	    if (!isp[i])
	        for (int j = i * 2; j <= n; j += i)
	            isp[j] = 1;
	}
	vector < int > v;
	for (int i = 2; i <= n; i++)
		if (!isp[i]) 
		{
			//cout << i << endl;
			v.push_back(i);
		}
	/*for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
		//ok*/
	int m = 0;
	while (ans <= v.size())
	{
		if (m + v[ans - 1] >= n)
			break;
		ans++;
		m += v[ans - 1];
		cout << v[ans - 1] << endl;
	}
	cout << ans << endl;
	return 0;
}