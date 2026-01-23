#include<stdio.h>
int main() {
	float t,s;
	int m;
	printf("Quang duong di duoc (km) : ");
	int kq = scanf("%f",&s);
	if (kq!=1||s<=0) {
		printf("Nhap sai!");
		return 0;
	}
	printf("Thoi gian taxi cho (phut) :");
	kq = scanf("%f",&t);
	if (kq!=1||t<=0) {
		printf("Nhap sai!");
		return 0;
	}
	if (s<=0.5)
		m = 12000;
	else if (s>0.5&&s<=30) {
		m = 12000 + 15000*(s-0.5);
	} else if (s>31) {
		m = 12000 + 15000*25.5 + 12000*(s-30);
	}
	if (t>5) {
		m = m + 1000*(t-5);
		//printf("Tong tien taxi la (dong) : %d VND",m);
		printf("%-30s %-30s %-30s\n","So km","So phut cho","Tong tien");
		printf("%-30.0g %-30.0g %-30d\n",s,t,m);
	} else {
		//printf("Tong tien taxi la (dong) : %d VND",m);
		printf("%-30s %-30s %-30s\n","So km","So phut cho","Tong tien");
		printf("%-30g %-30.0g %-30d\n",s,t,m);
	}
}