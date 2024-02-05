#include <stdio.h>

int main() {
    int i, j, k =4;
    int temp;
    int a[] ={7, 10, 4, 20, 15  }; 
    int len = sizeof(a) / sizeof(a[0]);

    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    printf("%d",a[k-1]);
    return 0;
}
