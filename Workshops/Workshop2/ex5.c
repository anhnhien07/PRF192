#include<stdio.h>
int main() {
	int n,tong;
	tong = 0;
	printf("Nhap vao so nguyen duong n:");
	while(1) {
		while(scanf("%d",&n)!=1||n<0) {
			printf("Nhap lai n:");
			fflush(stdin);
		}

		if (n==0) break;
		if (n>0) {
			tong = tong + n;
			printf("Nhap tiep so n:");
		}
	}
	printf("Tong cac so nguyen duong da nhap: %d",tong);

}