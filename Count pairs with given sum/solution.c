// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
int arr[] = {2, 4, 1, 3, 5};
int n1=sizeof(arr)/sizeof(arr[0]);
int i,j,count=0,K=5;
for(i=0;i<n1;i++){
 for(j=i+1;j<n1;j++){
     if(arr[i]+arr[j]==K){
         count++;
         printf("(%d,%d)\n",arr[i],arr[j]);
     }
 }
}
printf("%d",count);
return 0;
}
