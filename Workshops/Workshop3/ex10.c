#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int random,doan,k;
	srand(time(NULL));
	random = rand()%100+1;
	do {
		printf("Nhap vao so du doan cua ban:");
		do {
			k = scanf("%d",&doan);
			if (k!=1||doan<0||doan>100) {
				printf("Nhap lai so du doan:");
				fflush(stdin);
			}
		} while(k!=1||doan<0||doan>100);
		if (doan<random) printf("Lon hon!\n");
		else if (doan>random) printf("Nho hon!\n");
		else printf("Ban da doan chinh xac!");
	} while (doan!=random);
}

