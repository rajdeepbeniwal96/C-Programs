#include <iostream>
using namespace std;

int main() {
    int first = 10;
    int second = 20;

    cout << boolalpha;
    cout << "Equal: " << (first == second) << "\n";
    cout << "Not equal: " << (first != second) << "\n";
    cout << "Greater than: " << (first > second) << "\n";
    cout << "Less than: " << (first < second) << "\n";
    cout << "Greater than or equal to: " << (first >= second) << "\n";
    cout << "Less than or equal to: " << (first <= second) << "\n";

    return 0;
}