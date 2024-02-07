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
    int count=0,n=6;
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
   
    sort(arr,n);
    sort(dep,n);
    
    int arrin=0;
    int depin=0;
    
    while(arrin<n && depin<n){
        if(arr[arrin]<=dep[depin]){
            count++;
        }
        else{
            depin++;
        }
       arrin++;
    }
   printf("number of platforms required : %d",count);
    return 0;
}
