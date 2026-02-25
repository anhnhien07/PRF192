#include<stdio.h>
int main() {
	int n,sodu,kq;
	printf("Nhap so nguyen n:");
	int k ;
	do {
		k=scanf("%d",&n);
		if (k!=1){

				printf("Nhap lai n:");
				fflush(stdin);
				
			}
	} while(k!=1);
	do {
		sodu = n%10;
		kq = kq*10 + sodu;
		n=n/10;
	} while (n!=0);
	printf("So dao nguoc la: %d",kq);
}