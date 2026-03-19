#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	int digits = 0, letters = 0, others = 0;
	printf("INPUT:\n");
	if(fgets(str, sizeof(str),stdin)){
	str[strcspn(str, "\n")] = 0;
    }
	//scanf("%[^\n]",str);
	printf("\nOUTPUT:\n");
	int len = strlen(str);
	for (int i=0;i<len;i++){
		if (isdigit(str[i])){ //kiểm tra chữ số 
			digits++;
		} 
		else if (isalpha(str[i])){ //kiểm tra chữ cái
			letters++;
		}
		else others++; //các ký tự còn lại
	}
	printf("%d\n", digits);
    printf("%d\n", letters);
    printf("%d\n", others);
}