#include <stdio.h>
int main() {
int a[] = {1, 5, 10, 20, 40, 80};
int b[]= {6, 7, 20, 80, 100};
int c[] = {3, 4, 15, 20, 30, 70, 80, 120};
int n1= sizeof(a) / sizeof(a[0]);
int arr[10];
int i,j,k,g=0;
for(i=0;i<n1;i++){
    for(j=0;j<n1;j++){
        if(a[i]==b[j]){
            for(k=0;k<n1;k++){
                if(a[i]==a[k]){
                    arr[g]=a[i];
                    g++;
                }   
            }
        }
    }
}
for(i=0;i<g;i++){
      printf("common elements in array:%d\n",arr[i]);
  }
  return 0;
}
