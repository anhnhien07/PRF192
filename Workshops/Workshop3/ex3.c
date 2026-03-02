#include<stdio.h>
int overtime(float hours){
	if (hours>40)
	return 1;
	else return 0;
}
float nhapRate(){
	float soRate;
	printf("Nhap so tien moi gio: ");
	while(scanf("%f",&soRate)!=1||soRate<=0){
		printf("Nhap sai! Nhap lai: ");
		fflush(stdin);
	}
	return soRate;	
}
float nhapGio(){
	float soGio;
	printf("Nhap so gio cong nhan lam: ");
	while(scanf("%f",&soGio)!=1||soGio<=0){
		printf("Nhap sai! Nhap lai: ");
		fflush(stdin);
	}
	return soGio;	
}
float calculate_salary(float hours, float rate){
	float tien;
	if (overtime( hours))
	tien = rate*40 + 1.5*(hours-40)*rate;
	else
	tien = rate*hours;
	return tien;
}
int main(){
	float hours, rate;
	rate = nhapRate();
	hours = nhapGio();
	printf("Luong cong nhan: %.0f",calculate_salary(hours,rate));
}