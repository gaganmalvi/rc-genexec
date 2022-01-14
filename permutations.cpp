// clang-format off
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define el   '\n'
// clang-format on

long fact(long n) {
    long ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= i;
    return ans;
}

int perm(string str) {
    size_t length = str.length();
    vector <int> freq(26, 0);
    for (int i = 0; i < length; i++)
        if (str[i] >= 'a')
            freq[str[i] - 'a']++;
    int f = 1;
    for (int i = 0; i < 26; i++)
        f *= fact(freq[i]);
    return (int)fact(length) / f;
}

int32_t main() {
    FastIO;
    try {
        string s;
        cin >> s;
        if (!cin || s.length() < 1 || s.length() > 100000)
            throw -1;
        cout << perm(s) << el;
    } catch (...) {
        cout << "Invalid input. Please refer to the question description." << endl;
        return 0;
    }
}
