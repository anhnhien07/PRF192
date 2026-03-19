#include<stdio.h>
#include<string.h>
int main(){
	char str[101];
	char find,replace;
	int count=0;
	printf("INPUT:\n");
	scanf("%[^\n]",str);
	getchar();
	scanf("%c[]",&find);
	getchar();
	scanf("%c",&replace);
	printf("\nOUTPUT:\n");
	int len = strlen(str);
	for (int i=0;i<len;i++){
		if(str[i]==find){
			count++;
		str[i]=replace;
	}
}
    printf("%d\n",count);
	printf("%s",str);
}