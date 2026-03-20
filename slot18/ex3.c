#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
typedef struct{
	int id;
	char name[100];
	float price;
}Book;
int main() {
  system("cls");
  printf("INPUT:\n");
  int n;
  scanf("%d",&n);
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  Book p[100];
   for (int i =0; i<n;i++){
  	printf("Sach thu %d:\n",i+1);
  	printf("ID:");
  	scanf("%d",&p[i].id);
  	printf("Name:");
  	scanf(" %[^\n]",p[i].name);
  	printf("Price:");
  	scanf("%f",&p[i].price);
  	printf("\n");
  }
  int chon;
  printf("Chon ID sach can tim:");
  scanf("%d",&chon);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
 
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int max=0;
  int index;
  for (int i=1;i<n;i++){
  	if(p[i].price>p[max].price){
  		max =i;
  }
  }
  printf("Sach co gia cao nhat: \n");
  printf("ID: %d\n",p[max].id);
  printf("Name: %s\n",p[max].name);
  printf("Price: %.3f\n",p[max].price);
  printf("\n");
  int found =0;
  for (int i=0;i<n;i++){
  	if (p[i].id==chon){
  		found =1;
  		index =i+1;
	  }
  }
  printf("Sach can tim: \n");
  if (found==1){
  	printf("--->Index: %d\n",index);
  }
  else printf("Not found\n");
  printf("\n");
  printf("Sap xep theo gia tang dan:\n");
  for (int i=0;i<n;i++){
  		for (int i=0;i<n;i++){
  			for(int j=i+1;j<n;j++){
  				if (p[i].price>p[j].price){
  					float temp = p[i].price;
  					p[i].price=p[j].price;
  					p[j].price=temp;
				  }
			  }
		  }
	printf("ID: %d\n",p[i].id);
  printf("Name: %s\n",p[i].name);
  printf("Price: %.3f\n",p[i].price);	
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}