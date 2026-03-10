#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE: 
  float a[2];
  int invalid = 0;
  float sum = 0;
  for (int i =0; i<2;i++){
  if(scanf("%f",&a[i])!=1||a[i]<=0){
  	invalid = 1;
}
   sum = sum +a[i]*a[i];
}
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   if (invalid ==1){
  	printf("Invalid input");
  	return 0;
}
  float result;
  result = cbrt(sum);
  printf("%.2f",result);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
