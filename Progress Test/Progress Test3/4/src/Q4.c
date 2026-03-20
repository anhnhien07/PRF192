#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Function to find the largest even number in an array
int findLargestEvenNumber(int arr[], int n){
	//@STUDENT: WRITE YOUR CODE HERE:
	 int found = 0;
    int max;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            if (!found){
                max = arr[i];
                found = 1;
            } else if (arr[i] > max){
                max = arr[i];
            }
        }
    }

    if (found) return max;
    return -1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n;
  scanf("%d",&n);
  int a[n];
  for (int i=0; i<n;i++){
  	scanf("%d",&a[i]);
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int result = findLargestEvenNumber(a, n);
  if (result!=-1){
  printf("%d",result);
}
else printf("There are no even numbers in %d elements ",n);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
