#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;  // Input the number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
