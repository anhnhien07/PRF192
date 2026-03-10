#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int count;
  int invalid =0;
  count =0;
  int even=0;
  if (scanf("%d",&n)!=1||n<0){
    invalid=1;
    n=0;
}
  int a[n];
  for (int i=0;i<n;i++)
   scanf("%d",&a[i]);
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
if (invalid == 1){
      printf("Invalid input");
      return 0;
  }
   for (int i=0;i<n;i++){
   	if (a[i]%2==0){
   		even=1;
   		int appeared = 0;
   		for (int k=0;k<i;k++){
   			if (a[i]==a[k]){
   			 appeared =1;
   			 break;
   		}
	}
   if (appeared==0){
   	int count =0;
   	for (int j=0;j<n;j++){
   		if (a[i]==a[j])
		   count++;
	   }
	   printf("%d-%d\n",count,a[i]);
   }
} 
}
 if (even==0)
 printf("Not found\n");
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
