#include <stdio.h>
int is_prime(int n) {
    if (n<2) 
	return 0; 
    if (n==2) 
	return 1;
    for (int i=2;i*i<=n;i++){ 
        if (n%i==0)
            return 0; 
    }
    return 1;
}
int nhapa(){
	int soa;
	printf("Nhap a: ");
	while(scanf("%d",&soa)!=1||soa<=0){
		printf("Nhap sai! Nhap lai: ");
		fflush(stdin);
	}
	return soa;	
}
int nhapb(soa){
	int sob;
	printf("Nhap b: ");
	while(scanf("%d",&sob)!=1||sob<=soa){ //dieu kien a<b
		printf("Nhap sai! Nhap lai: ");
		fflush(stdin);
	}
	return sob;	
}
int main(){
    int a, b;
    a = nhapa();
    b = nhapb(a);
    int nt=0;
    printf("Cac so nguyen to trong khoang [%d,%d] la:\n", a, b);
    for (int i=a;i<=b;i++) {
        if (i>2 && i%2 == 0) {
            continue; 
        }
        if (is_prime(i)) {
            printf("%d ", i);
            nt =1;
        }
    }
	if (nt ==0){
		printf("khong ton tai!");
	}    
}