#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int x,y,tong;
  tong = 0;
  printf("\nINPUT:\n");
  scanf("%d\n",&x);
  scanf("%d",&y);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int n = x; n <= y; n++){
        if (n % 2 ==1) {
            tong += n;
        }
    }
  if (x>y){
  	printf("Error: y must be greater than x");
  }
  else
  printf("%d",tong);
  return 0;
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
