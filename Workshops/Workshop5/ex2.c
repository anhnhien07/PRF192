#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("INPUT:\n");
	scanf("%[^\n]",str);
	printf("\nOUTPUT:\n");
	int length = strlen(str);
	for (int i=length-1; i>=0;i--)
	printf("%c",str[i]);
}