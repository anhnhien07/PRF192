#include<stdio.h>
int main(){
	float bien, thuc;
	int nguyen;
	printf("Nhap so thuc:");
	scanf("%f",&bien);
	printf("Gia tri da nhap : %.4f\n",bien);
	nguyen=(int)bien;
	printf("Phan nguyen la : %d\n",nguyen);
	thuc = bien - nguyen;
	printf("Phan thuc la : %.4f\n",thuc);
}
