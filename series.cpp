#include <iostream>
#include <math.h>
using namespace std;
#define el '\n'

int main() {
    try {
        long long n;
        cin >> n;
        if (!cin || (n < 0 || n > 100))
            throw -1;
        while (n--) {
            int x, y;
            cin >> x;
            if (!cin || x < 1 || x > 10000)
                throw -1;
            cin >> y;
            if (!cin || y < 1 || y > 100000)
                throw -1;
            for (int i = 1; i <= y; i++)
                cout << x * i + 1 << el;
        }
    } catch (...) {
        cout << "Invalid input. Please refer to the question description." << endl;
        return 0;
    }
}