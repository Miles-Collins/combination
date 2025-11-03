// ############################################################################
// # Program: Combination Calculator                                         #
// # Author: Miles Collins                                                   #
// # Date: November 3, 2025                                                  #
// ############################################################################

#include <cstdint>
#include <iostream>
using namespace std;

// ############################################################################
// # factorial - compute x! (x factorial)                                    #
// # Register usage explanation:                                             #
// #   x   - input parameter (the number to compute factorial of)            #
// #   acc - accumulator to store the running product                        #
// #   i   - loop counter from 2 to x                                        #
// ############################################################################
uint16_t factorial(const uint16_t x) { 
    if (x == 0 || x == 1) return 1;  // base case: 0! = 1! = 1
    uint32_t acc = 1;                 // initialize accumulator to 1
    for (uint16_t i = 2; i <= x; ++i) // loop from 2 to x
        acc *= i;                     // multiply accumulator by i
    return static_cast<uint16_t>(acc);
 }

// ############################################################################
// # main - compute combination C(n,k) = n! / (k! * (n-k)!)                  #
// # Register usage explanation:                                             #
// #   n     - first user input (total items)                                #
// #   k     - second user input (items to choose)                           #
// #   c_n_k - result of the combination calculation                         #
// ############################################################################
int main() {
    int n, k;  // declare variables for user input

    // ---- Get input from user ----
    cout << "Enter n: ";  // prompt for n
    cin >> n;             // read n from user
    cout << "Enter k: ";  // prompt for k
    cin >> k;             // read k from user

    // ---- Validate input ----
    if (n <= 0 || k <= 0 || (n - k) < 0) {  // check for invalid inputs
        cout << "result = -1" << endl;       // print error value
        return 0;                             // stop the program
    }

    // ---- Calculate C(n,k) = n! / (k! * (n-k)!) ----
    // Use three explicit calls to factorial
    uint16_t c_n_k = factorial(n) / (factorial(k) * factorial(n - k));

    // ---- Print the result ----
    cout << "result = " << c_n_k << endl;  // output the combination value

    return 0;  // stop the program
}