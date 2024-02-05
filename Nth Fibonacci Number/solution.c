#include<stdio.h>
int fibonacci(int n){
    int i,a=0,b=1,res;
    if(n==0 || n==1){
        return n;
    }
    for(i=2;i<=n;++i){
        res=a+b;
        a=b;
        b=res;
    }
    return res;
}

int main(){
    int n,i,fib;
    printf("enter the number:");
    scanf("%d",&n);
    fib=fibonacci(n);
    printf("%d",fib);  
return 0;
}
