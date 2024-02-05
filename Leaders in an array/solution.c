#include <stdio.h>

int main() {
    int i,k =1;
    int a[] ={16,17,4,3,5,2};
    int len = sizeof(a) / sizeof(a[0]);
    int min=a[len-1];
    int led[10];
    led[0]=a[len-1];

    for(i=len-2;i>=0;i--){
            if(a[i]>min){
                led[k]=a[i];
                k++;
                min=a[i];
            }
        }
    for(i=k-1;i>=0;i--){
       printf("%d ",led[i]);
    }
    return 0;
}
