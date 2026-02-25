#include<stdio.h>
int main() {
	int n,i,k;
	i=0;
	printf("Nhap so n: ");
	do {
		k=scanf("%d",&n);
		if (k!=1){
				printf("Nhap lai n:");
				fflush(stdin);
			}
	} while(k!=1);
	do {
		i++;
	}
	while (i*i<n);
	if (i*i==n)
		printf("%d la so chinh phuong",n);
	else
		printf("%d khong phai la so chinh phuong",n);
}

