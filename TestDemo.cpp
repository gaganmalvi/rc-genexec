/*
    Author: DF
    Question: Add Sub Pow2
*/

// clang-format off
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define el '\n'
// clang-format on

void solveMyProblem(int n) {
    for(int i = 0; i < n; i++) 
        cout << "Hello World" << el;
}

int main() {
    FastIO;
    try {
        int n;
        cin >> n;
        if (!cin || (n < 0 || n > 1000000000))
            throw -1;
        solveMyProblem(n);
    } catch (...) { cout << "Invalid Input. Please Check The Question Description." << endl; }
    return 0;
}
