#include <cstdint>
#include <iostream>
using namespace std;

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
uint16_t factorial(const uint16_t x) { 
    if (x == 0 || x == 1) return 1;
    uint32_t acc = 1;
    for (uint16_t i = 2; i <= x; ++i) acc *= i;
    return static_cast<uint16_t>(acc);
 }

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
int main() {
    int n, k;

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;

    if (n <= 0 || k <= 0 || (n - k) < 0) {
        cout << "result = -1" << endl;
        return 0;
    }

    // calculate C(n,k) = n! / (k! * (n-k)!)
    uint16_t c_n_k = factorial(n);

    // write out results
    cout << "result = " << c_n_k << endl;

    return 0;
}