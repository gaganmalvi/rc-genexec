#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define el   '\n'

long fact(long n) {
   if(n == 0 || n == 1 )
      return 1;
   return n*fact(n-1);
}
int perm(string str)
{
    int length = str.length();
 
    int freq[26];
    memset(freq, 0, sizeof(freq));
 
    for (int i = 0; i < length; i++)
        if (str[i] >= 'a')
            freq[str[i] - 'a']++;
 
    int f = 1;
    for (int i = 0; i < 26; i++)
        f = f * fact(freq[i]);
 
    return fact(length) / f;
}

int32_t main() {
    FastIO;
    istream &in(cin);
    ostream &out(cout);
    try {
        string s;
        cin >> s;
        if (!cin || s.length() < 1 || s.length() > pow(10,5))
            throw -1;
    
        cout << perm(s) << el;
    }
    catch (...) {
        cout << "Invalid input. Please refer to the question description." << endl;
        return 0;
    }
}