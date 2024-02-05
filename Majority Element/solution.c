#include <stdio.h>

int main() {
    int i,j,flag=-1;
    int n=3;
    int a[] ={1,2,3} ;
    int len = sizeof(a) / sizeof(a[0]);

    for(i=0;i<len;i++){
          int count=0;
          for(j=0;j<len;j++){
              if(a[i]==a[j]){
                  count++;
                  if(count>len/2){
                      flag=a[i];
                  }
               }
          }
    }
printf("%d ",flag);
return 0;
}
