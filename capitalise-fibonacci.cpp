#include <iostream>
#include <math.h>
#include <string>

int main() {
    try {
        int test;
        std::cin >> test;
        if (!std::cin || test < 1 || test > 20)
            throw -1;
        for (int t = 0; t < test; t++) {
            std::string s;
            std::cin >> s;
            size_t n = s.length();
            if (!std::cin || n < 1 || n > 250)
                throw -1;
            char *result = new char[n + 1];
            for (int i = 0; i < n; i++) {
                if (!(s[i] >= 'a' && s[i] <= 'z'))
                    throw -2;
                result[i] = s[i];
            }
            result[n] = '\0';
            int prev = 1, current = 2;
            result[0] = result[0] - 32;
            std::cout << result[0];
            if (n >= 2) {
                result[1] = result[1] - 32;
                std::cout << result[1];
            }
            for (int i = 2; i < n; i++) {
                if (i == current) {
                    result[i] = result[i] - 32;
                    int tmp = current;
                    current = current + prev, prev = tmp;
                }
                std::cout << result[i];
            }
            std::cout << result[n] << "\n";
            delete[] result;
        }
    } catch (...) { std::cout << "Invalid input. Please refer to the question description.\n"; }

    return 0;
}
