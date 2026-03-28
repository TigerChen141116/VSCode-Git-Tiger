#include <bits/stdc++.h>
using namespace std;

// v[0]:大写字母 v[1]:小写字母 v[2]:数字 v[3]:特殊字符
vector<char> v[4];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  // 修复cin.tie()参数问题
    cout.tie(nullptr);

    int n, m, a, b, cnt = 0;
    cin >> n >> m;
    cin >> a >> b;

    string s;
    // 忽略cin之后的换行符，避免getline读取空行
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < n; i++) {  // 规范的0开始计数
        bool has_upper = false, has_lower = false;
        bool has_digit = false, has_special = false;
        cnt = 0;

        getline(cin, s);  // 读取完整的密码串

        // 长度达到理想长度b，强度+1
        if (s.size() >= b) cnt++;

        // 遍历字符，判断包含的字符类型
        for (int j = 0; j < s.size(); j++) {
            if (isupper(s[j])) has_upper = true;
            else if (islower(s[j])) has_lower = true;
            else if (isdigit(s[j])) has_digit = true;
            else has_special = true;
        }

        // 累加字符类型的强度（每类+1）
        cnt += (has_upper + has_lower + has_digit + has_special);

        // 判断是否符合要求并输出
        if (cnt < m || s.size() < a) {
            cout << "False " << cnt << endl;
        } else {
            cout << "True " << cnt << endl;
            // 仅收集符合要求的密码的字符
            for (int j = 0; j < s.size(); j++) {
                if (isupper(s[j])) v[0].push_back(s[j]);
                else if (islower(s[j])) v[1].push_back(s[j]);
                else if (isdigit(s[j])) v[2].push_back(s[j]);
                else v[3].push_back(s[j]);
            }
        }
    }

    // 输出四类字符，无则输出None
    for (int i = 0; i < 4; i++) {
        if (v[i].empty()) {
            cout << "None" << endl;
        } else {
            for (char c : v[i]) {
                cout << c;
            }
            cout << endl;
        }
    }

    return 0;
}