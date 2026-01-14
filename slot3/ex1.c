//1.khai bao va khoi tao gia tri cho 2 so a,b nguyen
//2.khai bao bien kq
//hay in kq +,-,*,/ cua a,b
#include <stdio.h>
int main(){
	int a = 7, b =2;
	float kq;
	kq= a + b;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("%d + %d = %.0f\n",a,b,kq);
	kq=a-b;
	printf("%d - %d = %.0f\n",a,b,kq);
	kq=a*b;
	printf("%d * %d = %.0f\n",a,b,kq);
	kq=(float)a/b;
	printf("%d / %d = %.2f\n",a,b,kq);
	
	
	
}