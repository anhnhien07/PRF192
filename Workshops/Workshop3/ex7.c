#include<stdio.h>
int main(){
	int sodu,kq,n,k;
	kq=0;
	printf("Nhap so nguyen: ");
	do {
		k=scanf("%d",&n);
		if (k!=1||n<0){
			printf("Nhap lai n:");
			fflush(stdin);
		}
	}
	while (k!=1||n<0);
	do {
		sodu=n%2;
		kq= kq*10 + sodu;
		n=n/2;
	}
	while(n>0);
	printf("%d",kq);
} 
