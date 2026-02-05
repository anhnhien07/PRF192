#include<stdio.h>
int main() {
	int n,i;
	i=0;
	printf("Nhap so n: ");
	while(scanf("%d",&n)!=1) {
		printf("Nhap lai n:");
		fflush(stdin);
	}
	while (i*i<n) {
		i++;
	}
	if (i*i==n)
		printf("%d la so chinh phuong",n);
	else
		printf("%d khong phai la so chinh phuong",n);
}

