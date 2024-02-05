#include <stdio.h>
void sort(int a[],int len){
     int i,j,temp;
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main() {
    int x,y,k=2;
    int a[] = {1, 5, 8, 10};
    int len = sizeof(a) / sizeof(a[0]);
    sort(a,len);
    int ans=a[len-1]-a[0];
    int lar=a[len-1]-k;
    int sma=a[0]+k;
    for(int i=1;i<len;i++){
              if(sma<a[i]-k){
                  x=sma;
              }
              else{
                  x=a[i]-k;
              }
              if(lar>a[i-1]+k){
                  y=lar;
              }
              else{
                  y=a[i-1]+k;
              }
              if(x<0){
                  continue;
              }
              if(ans<y-x){
                  ans=ans;
              }
              else{
                  ans=y-x;
              }
          }
printf("%d ",ans);
return 0;
}
