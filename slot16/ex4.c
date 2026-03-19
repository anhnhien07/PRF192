// bài 3 nhưng dùng pointer
#include <stdio.h>
#include <string.h>

void reverse(char *str){
    char *start = str;
    char *end = str + strlen(str) - 1;

    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){
    char str[100];
    printf("Nhap chuoi: ");
    scanf("%[^\n]", str);
    reverse(str);
    printf("Chuoi dao nguoc: %s", str);

    return 0;
}