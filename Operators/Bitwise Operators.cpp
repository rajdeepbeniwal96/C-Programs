#include <iostream>
using namespace std;

int main() {
    int first = 12;
    int second = 10;

    cout << "First number: " << first << "\n";
    cout << "Second number: " << second << "\n";
    cout << "Bitwise AND: " << (first & second) << "\n";
    cout << "Bitwise OR: " << (first | second) << "\n";
    cout << "Bitwise XOR: " << (first ^ second) << "\n";
    cout << "Bitwise NOT of first: " << (~first) << "\n";
    cout << "Left shift first by 1: " << (first << 1) << "\n";
    cout << "Right shift first by 1: " << (first >> 1) << "\n";

    return 0;
}