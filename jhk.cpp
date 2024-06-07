#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;

    if (N > 0) {
        sum = N * (N + 1) / 2;
    } else if (N < 0) {
        sum = (N * (1 - N)) / 2 + 1; // Summing from N to 1
    } else {
        sum = 1;
    }

    cout << sum << endl;
    return 0;
}

