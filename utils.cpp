#include <algorithm>
#include <numeric> // For std::accumulate

// Greatest Common Divisor (GCD)
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Least Common Multiple (LCM)
ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

// Power function (modular exponentiation)
ll power(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

// Example usage.
// int main() {
//   ll result = power(2, 10, 1000000007);
// }

//Check if a number is prime.
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Factorial calculation (with modulo)
ll factorial(ll n, ll mod) {
    ll result = 1;
    for (ll i = 1; i <= n; ++i) {
        result = (result * i) % mod;
    }
    return result;
}

// Sum of elements in a vector
ll sum(const std::vector<ll>& v) {
    return std::accumulate(v.begin(), v.end(), 0LL);
}
