#include <stdio.h>

int main() {
    int i, j, k ,flag=-1;
    int arr[] ={1, 5, 3, 4, 3, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (arr[i]==arr[j]) {
                flag=i;
                break;
            }
         }
      }
    printf("%d",flag);
    return 0;
}
