//Nhap vào tháng, in ra quý//
#include<stdio.h>
int main(){
	int t,quy;
	printf("Nhap vao thang : ");
	int kq= scanf("%d",&t);
	if (kq!=1||t<1||t>12)
	{
	printf("Nhap sai!");
	return 0;
}
	switch(t){
		case 1...3: 
			quy = 1;
			break;
		case 4:
		case 5:
		case 6:
			quy = 2;
			break;
		case 7:
		case 8:
		case 9:
			quy = 3;
			break;
		case 10:
		case 11:
		case 12:
			quy = 4;
			break;
		
		}
	printf("Thang %d thuoc quy so %d",t,quy);

}