#include <iostream>
using namespace std;

int main() {
    int first = 20;
    int second = 6;
    int value = first;

    cout << "First number: " << first << "\n";
    cout << "Second number: " << second << "\n";
    cout << "Addition: " << first + second << "\n";
    cout << "Subtraction: " << first - second << "\n";
    cout << "Multiplication: " << first * second << "\n";
    cout << "Integer division: " << first / second << "\n";
    cout << "Remainder: " << first % second << "\n";

    cout << "Before post-increment: " << value << "\n";
    cout << "Post-increment result: " << value++ << "\n";
    cout << "After post-increment: " << value << "\n";

    cout << "Pre-increment result: " << ++value << "\n";
    cout << "After pre-increment: " << value << "\n";

    cout << "Before post-decrement: " << value << "\n";
    cout << "Post-decrement result: " << value-- << "\n";
    cout << "After post-decrement: " << value << "\n";

    cout << "Pre-decrement result: " << --value << "\n";
    cout << "After pre-decrement: " << value << "\n";

    return 0;
}