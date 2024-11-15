#include <iostream>
#include <cmath>
using namespace std;

#define endl '\n'
#define ll long long

/*
 * The number has exactly 3 divisors only if it is a square of a prime number.
 * For example, 4 has exactly 3 divisors: 1, 2, 4. Here, 4 is 2^2, and 2 is prime.
 */

bool checkPrime(ll mid) {
    if (mid <= 1)
        return false;

    // Trial Division Algorithm: Check divisibility up to the square root of the number
    for (ll i = 2; i <= sqrt(mid); i++) {
        if (mid % i == 0)
            return false;
    }
    return true;
}

// Binary Search to check if a number is a perfect square of a prime
bool binarySearch(ll number) {
    ll start = 1;  // Start from 1 because 0 is not a valid divisor
    ll end = sqrt(number);
    while (start <= end) {
        ll mid = start + (end - start) / 2;
        ll midSquare = mid * mid;
        if (midSquare == number) {
            // If the number is a perfect square, check if its square root is prime
            return checkPrime(mid);
        } else if (midSquare < number) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

void solve(ll number) {
    if (binarySearch(number))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);               

    int testCase;
    ll number;

    cin >> testCase;
    while (testCase--) {
        cin >> number;
        solve(number);         
    }
    return 0;
}
