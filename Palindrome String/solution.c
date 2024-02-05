#include <stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("enter a string:");
    scanf("%s",a);
    int n1=strlen(a);
    strcpy(b,a);
    strrev(b);

    if(strcmp(a,b)==0){
        printf("yes");
    }else{
        printf("no");
    }
    return 0;
}
