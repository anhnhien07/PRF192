#include<stdio.h>
int main(){
	int sodu,kq,n;
	kq=0;
	printf("Nhap so nguyen: ");
	while(scanf("%d",&n)!=1||n<0) {
			printf("Nhap lai n:");
			fflush(stdin);
		}
	while(n>0){
		sodu=n%2;
		kq= kq*10 + sodu;
		n=n/2;
	}
	printf("%d",kq);
} 
