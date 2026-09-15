#include <iostream>
using namespace std;

int main() {
    int value = 10;
    cout << "Initial value: " << value << "\n";

    value += 5;
    cout << "After += 5: " << value << "\n";
    value -= 3;
    cout << "After -= 3: " << value << "\n";
    value *= 2;
    cout << "After *= 2: " << value << "\n";
    value /= 4;
    cout << "After /= 4: " << value << "\n";
    value %= 3;
    cout << "After %= 3: " << value << "\n";

    return 0;
}