#include <stdio.h>
int main() {
	int a, b, r,k;
	printf("Nhap a,b: ");
	do {
		k = scanf("%d,%d",&a,&b);
		if (k!=2) {
			printf("Nhap lai a,b:");
			fflush(stdin);
		}
	} while(k!=2);
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	do {
		r = a % b;
		a = b;
		b = r;
	} while (b != 0);
	printf("UCLN = %d", a);
	return 0;
}
