#include <stdio.h>
#include<limits.h>
int main() {
    int i,j;
    int res=INT_MIN;
    int a[] = {6, -3, -10, 0, 2};
    int len = sizeof(a) / sizeof(a[0]);
    if(len==1){
        res=a[0];
    }
    for(i=0;i<len;i++){
          int temp=1;
          for(j=i;j<len;j++){
              temp=temp*a[j];
              if(temp>res){
                  res=temp;
                  }
               }
          }
printf("%d ",res);
return 0;
}
