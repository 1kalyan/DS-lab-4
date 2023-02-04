#include <iostream>
using namespace std;

long long pow_mod(long long b, long long n, long long m) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * b) % m;
        }
        n = n / 2;
        b = (b * b) % m;
    }
    return result;
}

int main() {
    long long b, n, m;
    cout << "Enter the base value (b): ";
    cin >> b;
    cout << "Enter the exponent value (n): ";
    cin >> n;
    cout << "Enter the modulus value (m): ";
    cin >> m;

    cout << "b^n mod m = " << pow_mod(b, n, m) <<endl;
    return 0;
}
