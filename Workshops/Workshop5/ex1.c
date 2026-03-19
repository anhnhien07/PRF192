#include<stdio.h>
int main(){
	char str[100];
	int count = 0;
	printf("INPUT:\n");
	scanf("%[^\n]",str);
	printf("\nOUTPUT:\n");
	for (int i=0; str[i]!='\0';i++)
	count++;
	printf("%d",count);
}