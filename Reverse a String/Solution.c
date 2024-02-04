#include <stdio.h>
#include<string.h>
int main() {
char str1[]="sathvika";
int n1=strlen(str1);
char str2[10];
int i,j;
for(i=0;i<n1;i++){  
    str2[i]='\0';
}
i=0;
for(j=n1-1;j>=0;j--){  
  str2[i++]=str1[j];
}
printf("reverse of a string:%s",str2);
return 0;
}
