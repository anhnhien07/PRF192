#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ROWS 2
#define COLS 2
int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	float a[ROWS][COLS];
  	float result;
  	float sum =0;
//nhap gia tri cac phan tu cua matran
  for(int i=0;i<ROWS; i++)
  for(int j=0;j<COLS;j++)
  scanf("%f",&a[i][j]);
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
   for(int j=0;j<COLS;j++){
    float hieu =0;
    for(int i=1;i>-1; i--){
    hieu =a[i][j]-hieu;	
	}
    sum = sum + hieu*hieu;
}
  result = sqrt(sum);
  printf("%.4f\n",result);
  if (result == 0)
  printf("Points are coincident\n");
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
