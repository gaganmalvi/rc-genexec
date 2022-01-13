/*
    Author: DF
    Question: Sum Of N Numbers
*/

// clang-format off
#include <iostream>
#include <vector>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define el '\n'
// clang-format on

void solveMyProblem(vector<long long> &arr) {
    for (long long i : arr)
        cout << (i * (i + 1)) / 2 << el;
}

int main() {
    // Start Here
    FastIO;
    try {
        long long n;
        cin >> n;
        if (!cin or (n < 0 or n > 100000))
            throw -1;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
            if ((!cin and i != n) or (arr[i] < 0 or arr[i] > 1000000000))
                throw -1;
        }
        solveMyProblem(arr);
    } catch (...) { cout << "Invalid Input. Please Check The Question Description." << endl; }
    return 0;
}
