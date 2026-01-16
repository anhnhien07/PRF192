#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap gia tri cua a,b: ");
	int kq = scanf("%d,%d",&a,&b);
	if (kq>0){
	 printf("kq ham scanf: %d\n",kq);
	 printf("a = %d, b = %d\n",a,b);
}
	else
	 printf("Nhap sai roi!\n");
	 printf("bai tap nhap voi scanf");
}
