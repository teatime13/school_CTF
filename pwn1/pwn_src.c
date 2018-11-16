#include<stdio.h>

int main() {
    char a[30];
    printf("a[0] = ");
    scanf("%s",&a[0]);
    if(a[9] == 'X' || a[11] == 'X') {
        printf("A little more goal\n");
    }
    else if(a[10] == 'X') {
        printf("flag is ......\n");
    }
    else {
        printf("go for it!\n");
    }
    return 0;
}
