#include<stdio.h>
int main(){
	int n,sodu,kq;
	printf("Nhap so nguyen n:");
	while(scanf("%d",&n)!=1) {
		printf("Nhap lai n:");
		fflush(stdin);
	}
	while (n!=0){
		sodu = n%10;
		kq = kq*10 + sodu;
		n=n/10;
}
	printf("So dao nguoc la: %d",kq);
}