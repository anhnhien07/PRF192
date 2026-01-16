#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a,b : ");
	scanf("%d,%d", &a,&b);
	char pt;
	printf("Nhap phep toan : ");
	fflush(stdin);
	scanf("%c",&pt);
	float kq =(float) a/b;
	if (pt=='/'){
  	 if (b==0)
	   printf("Khong the chia cho 0");
	 else 
	  printf("Ket qua : %d%c%d = %.2f\n",a,pt,b,kq);
}
    else 
    printf("khong phai phep chia");
}