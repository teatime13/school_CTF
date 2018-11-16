#include<stdio.h>
int main() {
    char buf[10];
    printf("func_addr=%p\n", *main);
    printf("what is your name?\n>");
    scanf("%s",buf);
    printf("Hello %s!\n", buf);
    return 0;
}
