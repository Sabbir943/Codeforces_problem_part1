#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to generate all prime numbers up to a given limit using the Sieve of Eratosthenes
vector<int> sieve(int limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n;

    // Generate all primes up to n
    vector<int> primes = sieve(n);
    unordered_set<int> prime_set(primes.begin(), primes.end());

    // Check for pairs
    for (int prime : primes) {
        if (prime_set.find(n - prime) != prime_set.end()) {
            cout << prime << " " << (n - prime) << endl;
            return 0;
        }
    }

    // If no such pair is found
    cout << -1 << endl;
    return 0;
}
