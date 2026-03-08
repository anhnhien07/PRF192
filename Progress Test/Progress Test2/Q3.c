#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
// Define matrix dimensions
#define ROWS 2
#define COLS 3

/**
 * TODO: Implement the function to find the min element of each row.
 * @param matrix: Input 2D integer array.
 * @param result: Output 1D int array to store the min element
 */
void findRowMin(int matrix[ROWS][COLS], int result[COLS]) {
    // Your logic here
    //so sánh trong 1 hàng theo từng cột
 for(int i = 0; i < ROWS; i++){
        int min = matrix[i][0];
        for(int j = 1; j < COLS; j++){
            if(matrix[i][j] < min){
                min = matrix[i][j];
            }
        }
        result[i] = min;
    }
}
/**
 * TODO: Implement the function to display the result array.
 */
void displayResults(int result[ROWS]) {
    //printf("%d",matrix[ROWS][COLS])
     for(int i = 0; i < ROWS; i++){
        printf("%d ", result[i]);
        printf("\n");
    }
}

int main() {
  system("cls");
  printf("INPUT:\n");	
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  //khai bao mang 2 chieu
  	int a[ROWS][COLS];
  	int result[ROWS];
//nhap gia tri cac phan tu cua matran
  for(int i=0;i<ROWS; i++)
  for(int j=0;j<COLS;j++)
  scanf("%d",&a[i][j]);
 
    // OUTPUT: Hiển thị kết quả ra màn hình
   printf("\nOUTPUT:\n");
    findRowMin(a, result);
    // gọi hàm in kết quả
    displayResults(result);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
