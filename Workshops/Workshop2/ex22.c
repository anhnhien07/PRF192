#include<stdio.h>
int main(){
	float n;
	int count=0;
	while (1){
	printf("Nhap vao n:");
	while(scanf("%f",&n)!=1||n<=0||n>1000){ //kiem tra n
	printf("Nhap lai ");
	fflush(stdin);
	}
	printf("Can bac 2 la: %.2f\n",sqrt(n));
	count++;
	if (count==5)	
	break;		
	}
	printf("Da xong xuat sac");
}