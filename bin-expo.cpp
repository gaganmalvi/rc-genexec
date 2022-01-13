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

long long pwr(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a);
        a = (a * a);
        b = b >> 1;
    }
    return res;
}

void solveMyProblem(vector<pair <long long, long long> > &arr) {
    for (pair <long long, long long> i : arr)
        cout << pwr(i.first, i.second) << el;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    FastIO;
    try {
        long long n;
        cin >> n;
        if (!cin or (n < 0 or n > 350000))
            throw -1;
        vector<pair <long long, long long> > arr(n);
        for (long long i = 0; i < n; i++) {
            cin >> arr[i].first;
            if ((!cin and i != n) or (arr[i].first< 0 or arr[i].first > 99))
                throw -1;
            cin >> arr[i].second;
            if ((!cin and i != n) or (arr[i].second< 0 or arr[i].second > 9))
                throw -1;
        }
        solveMyProblem(arr);
    } catch (...) { cout << "Invalid Input. Please Check The Question Description." << endl; }
    return 0;
}