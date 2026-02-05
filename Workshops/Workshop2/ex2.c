#include<stdio.h>
int main(){
	float n;
	int count=0;
	while (count<5){
	printf("Nhap vao n:");
	while(scanf("%f",&n)!=1||n<=0||n>1000){ //kiem tra n
	printf("Nhap lai n:");
	fflush(stdin);
	}
	printf("Can bac 2 la: %.2f\n",sqrt(n));
	count++;			
	}
	printf("Da xong xuat sac");
}