#include<iostream>
using namespace std;

long long factorial(int x) {
    long long result = 1;
    for(int i = 1; i <= x; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    
    try {
        int n,r;
        cin >> n >> r;
        if(!cin || n < 0 || n > 20 || r < 0 || r > 20 || r > n) {
            throw -1;
        }

        long long ans = factorial(n) / (factorial(n-r) * factorial(r));
        cout << ans << "\n";
    } catch(...) {
        cout << "Invalid input. Please refer to the question's description.\n";
    }

    return 0;
}
