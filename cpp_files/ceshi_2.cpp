#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve(int limit) {
    vector<int> numbers;
    vector<bool> flags(limit + 1, true);
    flags[0] = flags[1] = false;

    for (int i = 2; i <= limit; ++i) {
        if (flags[i]) numbers.push_back(i);
        for (int j = 0; j < numbers.size() && i * numbers[j] <= limit; ++j) {
            flags[i * numbers[j]] = false;
            if (i % numbers[j] == 0) break;
        }
    }
    return numbers;
}

long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> list1 = sieve(n);
    vector<int> list2 = sieve(m);

    int val1 = list1.back();
    int val2 = list2.back();

    long long result = mod_exp(val1, val2, k);

    cout << result << endl;

    return 0;
}