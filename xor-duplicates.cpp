/*
    Author: DF
    Question: Take XOR of all Numbers
*/

// clang-format off
#include <iostream>
#include <vector>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define el '\n'
// clang-format on

void solveMyProblem(long long n, vector<long long> &arr) {
    long long k = arr[0];
    for (long long i = 1; i < n; i++)
        k ^= arr[i];
    cout << k << el;
}

int main() {
    FastIO;
    try {
        long long n;
        cin >> n;
        if (!cin || (n < 0 || n > 100000) || !(n & 1))
            throw -1;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            if ((!cin and i != n))
                throw -1;
            cin >> arr[i];
            if ((arr[i] < 0 || arr[i] > 1000000000))
                throw -1;
        }
        solveMyProblem(n, arr);
    } catch (...) { cout << "Invalid Input. Please Check The Question Description." << endl; }
    return 0;
}
