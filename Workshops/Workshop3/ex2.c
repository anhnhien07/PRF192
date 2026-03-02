#include<stdio.h>
int calculate_taxi_fare(float distance){
	int tien=0;
	if (distance<=1)
		return 15000;
	else if (distance<=30)
	tien = 15000 + 12000*(distance-1);
	else tien = 15000 + 12000*29 + (distance-30)*10000;
	return tien;
	}
float nhapKm(){
	float soKm;
	printf("Nhap km di duoc: ");
	while(scanf("%f",&soKm)!=1||soKm<=0){
		printf("Nhap sai! Nhap lai: ");
		fflush(stdin);
	}
	return soKm;	
}
int main(){
	float distance;
	distance = nhapKm();
	printf("So tien cuoc Taxi: %d",calculate_taxi_fare( distance));
}

