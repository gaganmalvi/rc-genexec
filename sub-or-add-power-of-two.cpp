#include <iostream>
#include <math.h>
using namespace std;

void solve(long long n) {
    long long p1 = round(log2(n)), p2 = round(log2(n)) + 1;
    long long ans1 = abs(round(pow(2, p1)) - n), ans2 = abs(round(pow(2, p2)) - n);
    if (ans1 < ans2)
        cout << ans1 << "\n";
    else
        cout << ans2 << "\n";
}

int main() {
    try {
        int testcases;
        cin >> testcases;
        if (!cin || testcases < 1 || testcases > 50)
            throw -1;
        long long n;
        for (int T = 0; T < testcases; T++) {
            cin >> n;
            if (!cin || n < 1 || n > round(pow(10, 18)))
                throw -2;
            solve(n);
        }
    } catch (...) { cout << "Invalid Input. Please Check the Question Description.\n"; }
    return 0;
}
