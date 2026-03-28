#include <bits/stdc++.h>
using namespace std;
string a[105];
void turn(string s)
{
    for (int i = 0; i < s.size(); i++)
        if (isupper(s[i])) tolower(s[i]);
    return;
}
bool check(string a, string b)
{
    if (a.size() != b.size()) return 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i]) return 0;
    return 1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        turn(a[i]);
    }
    
    sort(a + 1, a + n + 1);
    int jsq = 1, ans = 0;
    string s;
    for (int i = 1; i < n; i++)
        if (a[i] == a[i + 1]) jsq++;
    	else 
        {
            s = a[i];
            ans = max(ans, jsq);
            jsq = 1;
        }
    cout << s;
	return 0;
}