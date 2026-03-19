//Nhap 1 mang in ra mang dao ngu?c
// bài 3 nhưng dùng pointer
#include <stdio.h>
#include <string.h>

void reverse(char str[]){
    int start = 0;
    int end = strlen(str) - 1;

    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

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