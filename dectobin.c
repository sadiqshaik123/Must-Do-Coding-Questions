#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Convert decimal to binary
    int binaryNumber[5];
    for (int i = 4; i >= 0; i--) {
        binaryNumber[i] = num % 2;
        num /= 2;
    }

    printf("Binary representation: ");
    for (int i = 0; i < 5; i++) {
        printf("%d", binaryNumber[i]);
    }
    printf("\n");

    // Sum pairs of bits
    int ans[3];
    for (int i = 0; i < 5; i += 2) {
        ans[i / 2] = binaryNumber[i] + binaryNumber[i + 1];
    }

    printf("Sum of pairs of bits: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}
