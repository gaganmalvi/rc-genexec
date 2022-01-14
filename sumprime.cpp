#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int sumOfPrimes(int n)
{
    bool prime[n + 1];
    memset(prime, true, n + 1);

    for (int p = 2; p * p <= n; p++) {

        if (prime[p] == true) {

            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }

    int sum = 0;
    for (int i = 2; i <= n; i++)
        if (prime[i])
            sum += i;
    return sum;
}

int main()
{
 try{
    int n;
    cin>>n;
    if(cin.fail()|| n<0|| n>pow(10,4)){
        throw -1;
    }
    cout<< sumOfPrimes(n);
}
catch(...){
    cout << "Invalid Input. Please Check The Question Description." << endl;
    return 0;

}
}