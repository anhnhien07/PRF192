#include<stdio.h>
void show_menu() {
	printf("\n--- MENU MAY TINH BO TUI ---\n");
	printf("1.Phep cong (+)\n");
	printf("2.Phep tru (-)\n");
	printf("3.Phep nhan (*)\n");
	printf("4.Phep chia (/)\n");
	printf("0.Thoat chuong trinh\n");
	printf("Chon: ");
}
void processor() {
	int chon;
	int a,b,k;
	do {
		show_menu();
		do {
			k=scanf("%d",&chon);
			if (k!=1||chon<0||chon>4) {
				printf("Chon lai:");
				fflush(stdin);
			}
		} while (k!=1||chon<0||chon>4);
		if (chon==0) {
			printf("Thoat!");
			break;
		}
		if (chon>= 1 && chon <= 4) {
			printf("Nhap so thu nhat: ");
			scanf("%d", &a);
			printf("Nhap so thu hai: ");
			scanf("%d", &b);
		}

		switch (chon) {
			case 1:
				printf("Ket qua: %d + %d = %d\n", a, b, a + b);
				break;
			case 2:
				printf("Ket qua: %d + %d = %d\n", a, b, a - b);
				break;
			case 3:
				printf("Ket qua: %d + %d = %d\n", a, b, a * b);
				break;
			case 4:
				if (b != 0) {
					printf("Ket qua: %d + %d = %d\n", a, b, a / b);
				} else {
					printf("Loi!\n");
				}
				break;
		}
	} while (chon != 0);
}

int main() {
	processor();
	return 0;
}