#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
#define el '\n'

int main() {
    try {
        long long n;
        cin >> n;
        if (!cin || (n < 0 || n > 100))
            throw -1;
        while (n--) {
            string x, y;
            cin >> x;
            if (!cin || x.length() < 1 || x.length() > 100)
                throw -1;
            y = x;
            reverse(y.begin(), y.end());
            if (y == x)
                cout << "YES" << el;
            else
                cout << "NO" << el;
        }
    } catch (...) { cout << "Invalid input. Please refer to the question description." << endl; }
    return 0;
}