#include <iostream>
using namespace std;

int main() {
    bool hasId = true;
    bool hasTicket = false;

    cout << boolalpha;
    cout << "Logical AND (has ID and ticket): " << (hasId && hasTicket) << "\n";
    cout << "Logical OR (has ID or ticket): " << (hasId || hasTicket) << "\n";
    cout << "Logical NOT (does not have ID): " << (!hasId) << "\n";

    return 0;
}