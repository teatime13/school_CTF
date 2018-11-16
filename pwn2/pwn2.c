#include<stdio.h>

int main() {
    printf("This is level2 challenge!\n");
    printf("I don't request your input\n");
    printf("see you!!\n");
}

//フラグを表示する関数
void print_flag() {
    int flag_encrypted[] = {14, 36, 41, 47, 1, 59, 51, 11, 41, 38, 17, 39, 61, 29, 59, 45, 28, 39, 39, 36, 59, 53};
    for(int i=0; i<sizeof(flag_encrypted)/sizeof(int); i++) {
        printf("%c",flag_encrypted[i] ^ 72);
    }
    printf("\n");
}
