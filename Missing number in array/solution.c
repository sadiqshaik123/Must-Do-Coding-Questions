#include <stdio.h>
void sort(int a[],int n){
     int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n=10;
    int arr[] = {6,1,2,8,3,4,7,10,5};

    sort(arr,n);

  for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]!=1){
            printf("Missing element in an array is:%d",arr[i]+1);
            break;
        }
  }
    return 0;
}
