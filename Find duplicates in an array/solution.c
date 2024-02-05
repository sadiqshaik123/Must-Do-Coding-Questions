#include <stdio.h>

int main() {
    int i, j, k = 0;
    int arr[] = {2,3,1,2,3};
    int len = sizeof(arr) / sizeof(arr[0]);
    int res[10];

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (arr[i] == arr[j]) {
                res[k] = arr[i];
                k++;
            }
        }
    }
    if(k<=0){
        res[0]=-1;
        k=1;
    }

    for (i = 0; i < k; i++) {
        printf("%d\n", res[i]);  // Add '\n' to print each element on a new line
    }

    return 0;
}
