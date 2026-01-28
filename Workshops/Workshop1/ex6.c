#include<stdio.h>
int main(){
	float d,g,c;
	float tk;
	char diem;
	printf("Nhap diem chuyen can :");
	int kq = scanf("%f %f %f",&d,&g,&c);
	printf("Kq nhap: %d\n",kq);
	if (kq!=3||d<=0||g<=0||c<=0) {
		printf("Nhap sai!");
		return 0; 
	}
	tk = 0.1*d + 0.3*g + 0.6*c;
	if (tk>=8.5)
	 diem = 'A';
	else if (tk >=7)
	diem = 'B';
	else if (tk>=5.5)
	diem = 'C';
	else if (tk>=4)
	diem = 'D';
	else 
	diem = 'F';
	printf("Diem so %.1f\n",tk);
	printf("Diem chu %c\n",diem);
	if (d<4||g<4||c<4 && diem =='F')
	{
		printf("Khong du dieu kien tot nghiep!\n");
	}
	else 
	printf("Du dieu kien tot nghiep!\n");
	return 0;
}