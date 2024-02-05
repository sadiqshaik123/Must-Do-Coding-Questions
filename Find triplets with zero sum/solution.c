#include <stdio.h>

int main() {
    int i, j, k ,flag=0;
    int arr[] ={0, -1, 2, -3, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            for(k=j+1;k<len;k++){
            if (arr[i]+arr[j]+arr[k]==0) {
                flag=1;
                break;
            }
         }
      }
   }
    printf("%d",flag);
    return 0;
}
