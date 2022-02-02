#include <iostream>
#include <math.h>
using namespace std;
#define el '\n'

int main() {
    try {
        int t;
        cin >> t;
        if (!cin || t < 0 || t > 2000) {
            return 1;
        }
        while (t--) {
            int x, y;
            cin >> x;
            if (!cin || x < 0 || x > 1000000)
                throw -1;
            cin >> y;
            if (!cin || y < 0 || y > 1000000)
                throw -1;
            cout << (int)(x ^ y) << el;
        }
    } catch (...) {
        cout << "Invalid input. Please refer to the question description." << endl;
        return 0;
    }
}