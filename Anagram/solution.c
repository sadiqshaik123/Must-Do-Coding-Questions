#include <stdio.h>
#include <string.h>

void sort(char s[]) {
    int i, j;
    int len = strlen(s);
    char temp;
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int anagram(char a[], char b[]) {
    sort(a);
    sort(b);
    int alen = strlen(a);
    int blen = strlen(b);
    int flag = 1;

    if (alen != blen) {
        flag = 0;
    } else {
        int i;
        for (i = 0; i < alen; i++) {
            if (a[i] != b[i]) {
                flag = 0;
                break;
            }
        }
    }

    return flag;
}

int main() {
    char a[50], b[50];
    printf("Enter String a: ");
    scanf("%s", a);
    printf("Enter String b: "); // Fixing the typo here
    scanf("%s", b);
    
    int ans= anagram(a, b); // Fixing the printf format specifier
    if(ans==1){
        printf("Anagram");
    }
    else{
        printf("Not anagram");
    }
    return 0;
}
