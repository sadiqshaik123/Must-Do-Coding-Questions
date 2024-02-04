// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
int arr[] = {1,2,3,-2,5};
int n1=sizeof(arr)/sizeof(arr[0]);
int i;
int current=arr[0];
int max=arr[0];
for(i=1;i<n1;i++){
     if(arr[i]>current+arr[i]){
         current=arr[i];
     }
     else{
         current=current+arr[i];
     }
     
    if(current>max){
        max=current;
    }
 }
printf("%d",max);
return 0;
}
