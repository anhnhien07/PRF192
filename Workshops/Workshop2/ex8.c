#include <stdio.h>
int main() {
	int a, b, r;
	printf("Nhap a,b: ");
	while(scanf("%d,%d",&a,&b)!=2) {
		printf("Nhap lai a,b:");
		fflush(stdin);
	}
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	while (b != 0) {
		r = a % b;   // phần dư
		a = b;       // gán a = b
		b = r;       // gán b = phần dư
	}
	printf("UCLN = %d", a);
	return 0;
}
