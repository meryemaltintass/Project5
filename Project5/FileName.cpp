#include <iostream>
#include <vector>
using namespace std;

// Function to generate all divisors of a number n
vector<int> generateDivisors(int n) {
    vector<int> divisors;

    // Loop through all integers from 1 to n
    for (int i = 1; i <= n; i++) {
        // Check if i divides n exactly
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

    return divisors;
}

// Main function for testing
int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    // Generate divisors
    vector<int> result = generateDivisors(n);

    // Display the divisors
    cout << "Divisors of " << n << " are: ";
    for (int d : result) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
