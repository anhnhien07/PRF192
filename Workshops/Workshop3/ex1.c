#include<stdio.h>
int is_leap_year(int year){
	if (year%4==0 && year%100!=0)
	return 1;
	else if (year%400==0)
	return 1;
	else 
	return 0;
}
int get_days_in_month(int month, int year){
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			if (is_leap_year(year))
			return 29;
			else 
			return 28;
		}
}
int nhapThang(){
	int thang;
	printf("Nhap thang: ");
	while(scanf("%d",&thang)!=1||thang<=0||thang>=13){
		printf("Nhap sai! Nhap lai: ");
		fflush(stdin);
	}
	return thang;
}
int nhapNam(){
	int nam;
	printf("Nhap nam: ");
	while(scanf("%d",&nam)!=1||nam<=0){
		printf("Nhap sai! Nhap lai: ");
		fflush(stdin);
	}
	return nam;
}
int main(){
	int month,year,day;
	month = nhapThang();
	year = nhapNam();
	day = get_days_in_month(month,year);
	printf("So ngay trong thang la: %d",day);
}
