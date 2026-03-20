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
  int prime;
  scanf("%d",&n);
 int count=0;
int i=n+1;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   while(count<4){
  	prime =1;
  	if (i<2) prime =0;
  	else {
  	for (int j=2;j*j<=i;j++){
  	if(i%j==0) {
	prime =0;
	break;
	 }
}   
}
   if (prime ==1){
   printf("%d\n",i);
   count++;
  }
  i++;
}
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
