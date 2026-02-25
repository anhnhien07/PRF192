#include<stdio.h>
int main(){
	float n;
	int kq;
	int count=0;
	do{
	printf("Nhap vao n:");
	do {
	kq = scanf("%f",&n);
	if (kq!=1||n<=0||n>1000){
	printf("Nhap lai n:");
	fflush(stdin);
	}
}
	while(kq!=1||n<=0||n>1000);
	printf("Can bac 2 la: %.2f\n",sqrt(n));
	count++;	
}
	while (count<5);
	printf("Da xong xuat sac");
}