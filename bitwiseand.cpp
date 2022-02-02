#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;
int main() {
    try {
        int n;
        cin >> n;
        if (n > 1080 || n <= 0)
            throw -2;
        while (n--) {
            int a, b, c;
            cin >> a >> b >> c;
            if (cin.fail() || a > 10000 || b > 10000 || c > 10000 || a < 0 || b < 0 || c < 0)
                throw -1;
            int ans = a & b & c;
            if (ans == 0)
                cout << "YES \n";
            else
                cout << "NO\n";
        }
    } catch (...) {
        cout << "Invalid Input. Please Check The Question Description." << endl;
        return 0;
    }
}
