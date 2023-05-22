#include<iostream>
#include<math.h>

using namespace std;
unsigned long long int u = 100000007;

unsigned long long int power(unsigned long long int a, unsigned long long int n) {
   unsigned long long int res = 1;
    while (n) {
        if (n & 1)
            res *= a;
        a *= a;
        n >>= 1;
    }
    return res;
}

int main() {
    unsigned long long int n;
    unsigned long long int m,k;
    cin >> n;
    unsigned long long int sum = n+1;
    unsigned long long int product = n;
    unsigned long long int divisors = 1;
    while(n--) {
        cin >> m >> k;
        sum += m * k;
        product *= power(m,k);
        divisors = divisors * (k + 1);
    }

    cout << divisors % u << "\n";
    cout << sum % u << "\n";
    cout << product % u << "\n";

}