
#include<stdio.h>
int main() {
	int n;
	int count;
	count = 0;
	printf("Nhap vao so nguyen n:");
	while(scanf("%d",&n)!=1||n<0||n>10) {
		printf("Nhap lai n:");
		fflush(stdin);
	}
	while (count<n) {
		count++;
		printf("%d ",count);
	}
	count = 1;
	while (count<10) {
		int kq = n * count;
		count++;
		printf("\n%d x %d = %d",n,count,kq);
	}

	printf("\nDa xong");
}