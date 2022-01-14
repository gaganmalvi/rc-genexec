#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main() {
    
    try {
        string s;
        cin >> s;

        size_t n = s.length();
        if(!cin || n < 1 || n > 1000) {
            throw -1;
        }

        // check if string has all lowercase letters.
        // also store the string in a character array (more efficient than using cpp strings with the transform() method to solve the question)

        char* result = new char[n+1];
        for(int i = 0; i < n; i++) {
            if(!(s[i] >= 'a' && s[i] <= 'z')) {
                throw -2;
            }
            result[i] = s[i];
        }
        result[n] = '\0';
        
        int prev = 1, current = 2;
        
        
        result[0] = result[0] - 32;
        cout << result[0];

        if(n >= 2) {
            result[1] = result[1] - 32;
            cout << result[1];
        }

        for(int i = 2; i < n; i++) {
            if(i == current) {
                result[i] = result[i] - 32;
                
                // also find the next fibonacci index
                int tmp = current;
                current = current + prev;
                prev = tmp;
            }

            cout << result[i];
        }

        cout << "\n";
        delete[] result;

    } catch(...) {
        cout << "Invalid input. Please refer to the question description.\n";
        return 1;
    }

    return 0;
}
