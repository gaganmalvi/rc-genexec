// clang-format off
#include <iostream>
#include <bitset>
#include <math.h>
#include <string>
using namespace std;
#define el   '\n'
// clang-format on

int dtb(int n) {
    string s = bitset<64>(n).to_string();
    size_t loc1 = s.find('1');
    if (loc1 != string::npos)
        return (int)s.substr(loc1).length();
    return 0;
}

int main() {
    try {
        int n;
        cin >> n;
        if (!cin || n < 0 || n > 2000)
            throw -1;
        while (n--) {
            int x;
            cin >> x;
            if (!cin || x < 0 || x > 1000000)
                throw -1;
            cout << dtb(x) << el;
        }
    } catch (...) {
        cout << "Invalid input. Please refer to the question description." << endl;
        return 0;
    }
}
