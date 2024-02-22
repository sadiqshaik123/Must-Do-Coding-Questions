#include <stdio.h>
#include<stdbool.h>
bool ispower(int n){
    if(n<=0){
        return false;
    }
    else{
        return (n&(n-1))==0;
    }
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    
    if(ispower(n)){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
