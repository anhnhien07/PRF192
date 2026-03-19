#include<stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char k){
		char c = tolower(k);
		if (c == 'a'||c == 'i'||c == 'u'||c == 'e'||c == 'o')
		return 1; 
        return 0;
    }
int countVowel(char str[]){
	int count = 0;
   int length = strlen(str);
	for (int i=0;i<length;i++){
	if (isVowel(str[i])){
	count++;
}
}
	return count;
}
int main(){
	char* str;
	str = (char*)malloc(100*sizeof(char));
	scanf("%[^\n]",str);
	int result= countVowel(str);
	printf("%d",result);
} 
