#include <bits/stdc++.h>
using namespace std;
const int N = 5e3 + 5, mo = 998244353;
int n, j, ans1, ans2, mi, mj;
int C[N][N], a[N], pre[N], suf[N];
signed main() {
    scanf("%d", &n);
    C[0][0] = 1;
    for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= i; ++j)
            C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % mo;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] == (n + 1) / 2) j = i;
        else a[i] = (a[i] > (n + 1) / 2) ? 1 : -1;
    }
    for (int i = 1; i <= j - 1; ++i)
        pre[i] = pre[i - 1] + a[i];
    for (int i = n; i > j + 1; --i)
        suf[i] = suf[i + 1] + a[i];
    mi = 0;
    for (int i = 1; i < j - 1; ++i)
        if (!pre[i] > 0)
            ++ans1, mi = i + 1;
    mj = n;
    for (int i = n; i > j + 1; --i)
        if (suf[i] > 0)
            ++ans2, mj = i - 1;
    printf("%d %d\n", ans1 + ans2 + !(mi == mj), C[ans1 + ans2][ans1]);
    return 0;
}