#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,add;
  float sum;
  sum = 0;
  add = 1;
  printf("\nINPUT:\n");
  scanf("%d",&n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i = 1; i <= n; i++){
  	add = add * i;
  	sum = sum + 1.0/add;
}
  if (n<=0){
  	printf("Error: n must be greater than 0.");
  }
  else 
  printf("%.3f",sum);
  return 0;
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
