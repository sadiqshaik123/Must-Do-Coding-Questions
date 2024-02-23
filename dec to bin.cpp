#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    bitset<4> binaryNumber(num);
    cout << "Binary representation: " << binaryNumber << endl;

    int ans[2];
    for (int i = 0; i < 4; i += 2) {
        ans[i / 2] = binaryNumber[i] + binaryNumber[i + 1];
    }

    cout << "Sum of pairs of bits: ";
    for (int i = 0; i < 2; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
