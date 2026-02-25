#include<stdio.h>
int main() {
	int n;
	int count;
	count = 0;
	int k;
	printf("Nhap vao so nguyen n:");
	do{
		k=scanf("%d",&n);
		if (k!=1||n<0||n>10){
		printf("Nhap lai n:");
		fflush(stdin);
	}
	}
	while(k!=1||n<0||n>10);
	do {
		count++;
		printf("%d ",count);
	}
	while (count<n); 
	count = 1;
	do {
		int kq = n * count;
		count++;
		printf("\n%d x %d = %d",n,count,kq);
	}
	while (count<10);
	printf("\nDa xong");
}