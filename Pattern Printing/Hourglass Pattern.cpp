#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (row = n - 1; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            cout << "* ";
        }

        for (col = 1; col <= (n - 1) * 2 - (2 * row); col++) {
            cout << "  ";
        }

        for (col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (row = 1; row <= n - 1; row++) {
        for (col = 1; col <= row; col++) {
            cout << "* ";
        }

        for (col = 1; col <= (n - 1) * 2 - (2 * row); col++) {
            cout << "  ";
        }

        for (col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
