#include <stdio.h>
#include<limits.h>
int second(int a[],int size){
    if(size<2){
        return -1;
    }
    
    int max,smax,i;
    max=smax=INT_MIN;
    
  
    for(i=0;i<size;i++){
        if(a[i]>max){
            smax=max;
            max=a[i];
        }else if((a[i]>smax)&&(a[i]<max)){
            smax=a[i];
        }
    }
     if(smax==INT_MIN){
        return -1;
    }
    else{
     return smax;
    }
}
int main(){
   int  n1 = 1;
   int arr[] = {1};
   int res=second(arr,n1);
   if(res==-1){
      printf("-1");
   }
   else{
       printf("%d",res);
   }
   return 0;
}
