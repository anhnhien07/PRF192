//bài 5 : 1 hàm hoán đổi 2 số nguyên
// 1 hàm hoàn đổi 3 số nguyên: giá trị số 1 <> giá trị số 3, số 2<>số 1, số 3<> số 2
#include<stdio.h>
int swap2(int a,int b){
	int temp = a;
	a=b;
	b=temp;
	printf("Sau khi hoan doi: %d %d\n",a,b);
}
int swap3(int x, int y, int z){
	int temp = x;
	x=z;
	z=temp;
	printf("Sau khi hoan doi: %d %d %d",x,y,z);
}
int main(){
	int a,b;
	int x,y,z;
	printf("Nhap 2 so a,b: ");
	scanf("%d %d",&a,&b);
	printf("Nhap 3 so x,y,z: ");
	scanf("%d %d %d",&x,&y,&z);
	swap2(a,b);
	swap3(x,y,z);
}