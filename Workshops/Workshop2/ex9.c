#include<stdio.h>
#include<stdlib.h> //tạo số ngẫu nhiên
#include<time.h> //Đổi số ngẫu nhiên mỗi lần chạy
int main() {
	int random,doan;
	srand(time(NULL));
	random = rand()%100+1; //số ngẫu nhiên chạy từ 0->100
	while (doan!=random) {
		printf("Nhap vao so du doan cua ban:");
		while(scanf("%d",&doan)!=1||doan<0||doan>100) {
			printf("Nhap lai so du doan:");
			fflush(stdin);
		}
		if (doan<random) printf("Lon hon!\n");
		else if (doan>random) printf("Nho hon!\n");
		else printf("Ban da doan chinh xac!");
	}

}