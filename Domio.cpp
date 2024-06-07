#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int one_row, one_column;

    // Read the input matrix and find the position of the '1'
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                one_row = i + 1;   // rows are 1-indexed
                one_column = j + 1; // columns are 1-indexed
            }
        }
    }

    // Calculate the minimum number of moves required
    int moves = abs(one_row - 3) + abs(one_column - 3);

    // Print the result
    cout << moves << endl;

    return 0;
}
