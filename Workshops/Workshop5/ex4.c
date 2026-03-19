#include<stdio.h>
#include<string.h>
int main(){
	char str[101];
	int count =0;
	printf("INPUT:\n");
	scanf("%[^\n]",str);
	printf("\nOUTPUT:\n");
	int len =strlen(str);
	for (int i=0;i<len;i++){
	if (str[i]!=' '&&(i==0||str[i-1]==' '))
	count++;
}
	printf("%d",count);
}