#include<stdio.h>
int main() {
	int sodu,rut,k;
	sodu=1000000;
	do {
		printf("So tien ban muon rut:");
		do{
			k =scanf("%d",&rut);
		if(k!=1||rut<0) {
			printf("Loi! Nhap lai so tien ban muon rut:");
			fflush(stdin);
		}
	}
	while(k!=1||rut<0);
		sodu=sodu-rut;
	}
	while (sodu>=0);
	printf("So du khong du!");
}