#include <stdio.h>
void sort(int a[],int n1){
    int i,j,temp;
    for(i=0;i<n1-1;i++){
        for(j=i+1;j<n1;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main() {
  int n1,n2,i,j,flag=1;
  printf("enter size of array 1:");
  scanf("%d",&n1);
  int a[n1];
  printf("elements array 1:");
  for(i=0;i<n1;i++){
      scanf("%d",&a[i]);
  }
  
  
  printf("enter size of array 2:");
  scanf("%d",&n2);
  int b[n2];
  printf("elements array 2:");
  for(i=0;i<n2;i++){
      scanf("%d",&b[i]);
  }
  
 sort(a,n1);
 sort(b,n2);
 if(n1!=n2){
     flag=0;
 }else{
     for(i=0;i<n1;i++){
         if(a[i]!=b[i]){
             flag=0;
             break;
         }
     }
 }

  if(flag==1){
      printf("Arrays are same");
  }
  else{
      printf("arrays are not same");
  }
  return 0;
}
