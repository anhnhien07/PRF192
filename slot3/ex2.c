//khai bao kieu ki tu ten kt, khoi tao gan gia tri cho bien nay
//in ra: gia tri cua bien
//gia tri thap phan, gia tri hex, octal
//kich thuoc kieu du lieu cua bien kt
#include <stdio.h>
int main(){
	char kt = 'a';
	printf(" %-10s|%-10s|%-10s|%-10s|%-10s|%-10s\n","Ten bien", "Gia tri", "Dec", "Hex", "Oct", "Size" );
	printf(" %-10s|%-10c|%-10d|%-10x|%-10o|%-10d","kt",kt, kt, kt, kt, sizeof(kt) );
	//printf("%c\n",kt);
	//printf("%d\n",kt);
	//printf("%x\n",kt);
	//printf("%o\n",kt);
	//printf("%d\n",sizeof(kt));
	
}