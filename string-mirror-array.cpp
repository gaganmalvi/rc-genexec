#include <iostream>
#include <string>
using namespace std;

void solve(string s, int n) {
    for (int i = 0; i < n; i++) {
        cout << abs(s[i] - s[n - i - 1]) << " ";
    }
    cout << "\n";
}

int main() {
    try {
        int testcases;
        cin >> testcases;
        if (!cin || testcases < 1 || testcases > 50)
            throw -1;
        int n;
        for (int T = 0; T < testcases; T++) {
            string s;
            cin >> s;
            n = s.length();
            if (!cin || n < 1 || n > 100)
                throw -2;
            for (int i = 0; i < n; i++)
                if (s[i] < 'a' || s[i] > 'z')
                    throw -3;
            solve(s, n);
        }
    } catch (...) { cout << "Invalid Input. Please Check the Question Description.\n"; }
    return 0;
}
