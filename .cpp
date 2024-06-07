#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long total_sum = 0;
    int total_subsets = 1 << n; // This is 2^n, the total number of subsets

    // Iterate over all possible subsets
    for (int mask = 1; mask < total_subsets; ++mask) { // start from 1 to exclude empty subset
        int subset_or = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                subset_or |= a[i];
            }
        }
        total_sum += subset_or;
    }

    cout << total_sum << endl;
    return 0;
}
