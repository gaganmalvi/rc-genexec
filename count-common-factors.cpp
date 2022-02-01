#include <cmath>
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long commDiv(long long a, long long b) {
    long long n = gcd(a, b), result = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}

int main() {
    try {
        long long n;
        cin >> n;
        if (!cin || (n < 0 || n > 100))
            throw -1;
        while (n--) {
            long long a, b;
            cin >> a;
            if (a <= 0 || a > 1000000000 || !cin)
                throw -1;
            cin >> b;
            if (b <= 0 || b > 1000000000 || !cin)
                throw -1;
            cout << commDiv(a, b) << endl;
        }
    } catch (...) { cout << "Invalid Input. Please Check The Question Description." << endl; }
    return 0;
}