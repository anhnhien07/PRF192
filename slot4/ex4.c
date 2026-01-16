#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a,b : ");
	scanf("%d,%d", &a,&b);
	char pt;
	printf("Nhap phep toan : ");
	scanf("%c\n",&pt);
	float kq =(float) a/b;
	if (b==0)
	  printf("Khong the chia cho 0");
	else 
	  printf("Ket qua : %d/%d = %.2f\n",a,b,kq);
}