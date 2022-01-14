/*
    Author: DF
    Question: Troll Binary Search
*/

// clang-format off
#include <iostream>
#include <vector>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define el '\n'
// clang-format on

void solveMyProblem(vector<long long> &arr) {
    for (long long i : arr) {
        if (i > 42069)
            cout << "Snoop Dogg" << el;
        else if (i < 42069)
            cout << "Martha Stewart" << el;
        else
            cout << "I am being Trolled" << el;
    }
}

int main() {
    FastIO;
    try {
        long long n;
        cin >> n;
        if (!cin or (n < 0 or n > 100000))
            throw -1;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            if ((!cin and i != n))
                throw -1;
            cin >> arr[i];
            if ((arr[i] < -1e9 or arr[i] > 1e9))
                throw -1;
        }
        solveMyProblem(arr);
    } catch (...) { cout << "Invalid Input. Please Check The Question Description." << endl; }
    return 0;
}