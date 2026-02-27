#include<stdio.h>
int tong(int n){
	int sum=0;
	for (int i =1; i<=n;i++){
		if (n%i==0){
			sum +=i;
		}
	}
	return sum;
}
int nhapInt(){
	int soInt;
	printf("Nhap so n: ");
	while(scanf("%d",&soInt)!=1||soInt<=0){
		printf("Nhap sai! Nhap lai: ");
		fflush(stdin);
	}
	return soInt;
}
int main (){
	int n;
	n = nhapInt();
	printf("Tong cac uoc so cua n: %d",tong(n));
}