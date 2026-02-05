#include<stdio.h>
int main() {
	int sodu,rut;
	sodu=1000000;
	while (sodu>=0) {
		printf("So tien ban muon rut:");
		while(scanf("%d",&rut)!=1||rut<0) {
			printf("Loi! Nhap lai so tien ban muon rut:");
			fflush(stdin);
		}
		sodu=sodu-rut;
	}
	printf("So du khong du!");
}