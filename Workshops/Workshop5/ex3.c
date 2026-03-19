#include<stdio.h>
#include<string.h>
int main(){
	char str[101];
	int found = 0;
	printf("INPUT:\n");
	scanf("%s",str); //không có khoảng trắng
	printf("\nOUTPUT:\n");
	int len=strlen(str);
	for (int i =0;i<len;i++){
		if (str[i]!=str[len-i-1]){
		found = 1;
		break;
	}
}
	if (found ==1)
	printf("No");
	else printf("Yes");
}