#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("INPUT:\n");
	scanf("%d",&n);
	char str[n][100];
	for (int i=0; i<n;i++){
	scanf("%s",str[i]);
}
	printf("\nOUTPUT:\n");
	for (int i=0;i<n-1;i++){
		for (int j =i+1;j<n;j++){
			if(strcmp(str[i],str[j])>0){
			char temp[100];
			strcpy(temp,str[i]);
		    strcpy(str[i],str[j]);
			strcpy(str[j],temp);
		}
	}
	}
	for (int i=0;i<n;i++){
		printf("%s\n",str[i]);
	}
}