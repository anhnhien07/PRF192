#include<stdio.h>
int lonnhat(int a,int b, int c){
	int max = 0;
	if (a>max){
		max = a;
		if (b>max)
			max = b;
			if (c>max)
			max = c;
	}
	return max;
}
int nhapInt(){
	int soInt;
	printf("Nhap so: %d ", soInt);
	while(scanf("%d",&soInt)!=1||soInt<=0){
		printf("Nhap sai! Nhap lai: ");
		fflush(stdin);
	}
	return soInt;
}
int main(){
	int a,b,c;
	a= nhapInt();
	b= nhapInt();
	c= nhapInt();
	printf("So lon nhat trong 3 so: %d", lonnhat(a,b,c));
}