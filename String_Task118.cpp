#include <bits/stdc++.h>
using namespace std;

int main() {
    string input, result = "";
    cin >> input;
    for (int i = 0; i < input.size(); i++) {
        char letter = tolower(input[i]);
        // Corrected the comparison operator here
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y') {
            continue;
        } else {
            result += ".";
            result += letter;
        }
    }
    cout << result << endl;
    return 0;
}
