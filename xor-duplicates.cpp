/*
    Author: DF
    Question: Take XOR of all Numbers
*/

// clang-format off
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define el '\n'
// clang-format on

void solveMyProblem(long long n, vector<long long> &arr) {
    long long k = arr[0];
    for (long long i = 1; i < n; i++) {
        k = k ^ arr[i];
    }
    cout << k << el;
}

int main() {
    try {
        long long t;
        cin >> t;
        if (!cin || (t < 0 || t > 100))
            throw -1;
        while (t--) {
            long long n;
            cin >> n;
            if (!cin || (n < 3 || n > 100000) || (n % 2 == 0))
                throw -1;
            vector<long long> arr(n);
            for (long long i = 0; i < n; i++) {
                cin >> arr[i];
                if ((!cin && i <= n - 1) || (arr[i] < 0 || arr[i] > 1000000000))
                    throw -1;
            }
            solveMyProblem(n, arr);
        }
    } catch (...) { cout << "Invalid Input. Please Check The Question Description." << endl; }
    return 0;
}