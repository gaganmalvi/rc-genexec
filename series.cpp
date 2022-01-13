#include <iostream>
#include <math.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define el   '\n'

int32_t main() {
    FastIO;
    istream &in(cin);
    ostream &out(cout);
    try {
        int x, y;
        cin >> x >> y;
        if (!cin or x < 1 or x > pow(10, 4) or y < 1 or y > pow(10, 5))
            throw -1;

        for (int i = 1; i <= y ; i++) {
            cout << x*i + 1 << el;
        }
    }
    catch (...) {
        cout << "Invalid input. Please refer to the question description." << endl;
        return 0;
    }
}