#include <bits/stdc++.h>
using namespace std;
vector< char > v[4];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n, m, a, b, cnt = 0;
	cin >> n >> m;
    cin >> a >> b;
	
    cin.ignore();
	string s;
	for (int i = 1; i <= n;i++)
	{
		bool c, d, e , f;
		c = d = e = f = 0;
		cnt = 0;
	   	getline(cin, s);
		if(s.size() >= b) cnt++;
		for (int j = 0; j < s.size(); j++)
		{
		    if(isupper(s[j])) c = 1;
		    else if(islower(s[j])) d = 1;
		    else if(isdigit(s[j])) e = 1;
		    else f = 1;
		}
		cnt += (c + d + e + f);
		//cout << cnt << endl;
		if (cnt < m || s.size() < a) cout << "False " << cnt << endl;
		else
        {
            cout << "True " << cnt << endl;
            for (int j = 0; j < s.size(); j++)
			{
		    	if(isupper(s[j])) v[0].push_back(s[j]);
		    	else if(islower(s[j])) v[1].push_back(s[j]);
		    	else if(isdigit(s[j])) v[2].push_back(s[j]);
		    	else v[3].push_back(s[j]);
			}
        }
	}
	for (int i = 0; i < 4; i++) 
	{
		if (!v[i].size()) cout << "None" << endl;
		else
		{
			for (int j = 0; j < v[i].size(); j++) 
				cout << v[i][j];
			cout << endl;
		}
	}
	return 0;
}