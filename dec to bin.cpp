#include <iostream>
#include <bitset>

using namespace std;

int main() {

    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    bitset<4> binaryNumber(decimalNumber);

    cout << "Binary equivalent: " << binaryNumber << endl;

    return 0;
}
