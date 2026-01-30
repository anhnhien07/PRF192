//ex 2 nhập vào 2 số nguyên a,b
//Nhập vào 1 trong 4 phép toán: +,-,*,/,%
#include<stdio.h>
int main() {
	int a,b;
	float kq;
	char dau;
	scanf("%d,%d",&a,&b);
	fflush(stdin);
	scanf("%c",&dau);
	switch(dau) {
		case '+':
			kq = a+b;
			break;
		case '-':
			kq= a - b;
			break;
		case '*':
			kq = a * b;
			break;
		case '/':
			if (b==0) {
				printf("Khong the chia cho 0");
			}
			kq = (float) a / b;
			break;
		case '%':
			if (b==0) {
				printf("Khong the chia cho 0");
			}
			kq = a % b;
			break;
	}
	if (b!=0) {
		if (kq<1) {
			printf("%d %c %d = %.2f",a,dau,b,kq);
		} else
			printf("%d %c %d = %.0f",a,dau,b,kq);
	}
}