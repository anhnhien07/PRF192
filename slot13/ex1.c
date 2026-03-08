#include<stdio.h>
/*
void doubleX(int x){
	x = x + x;	
}
void doubleX2(int *p){
	*p = *p + *p;
}
*/
void inputArr(int a[], int n){
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
	
}
void outputArr(int a[],int n){
	printf("Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int isPrime(int n){
	if (n < 2) return 0;
	if (n==2) return 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int countPrimes(int a[],int n){
	int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            count++;
        }
    }
    return count;
}
int main() {
    int n, a[2];

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    // Gọi hàm nhập
    inputArr(a, n);
    // Gọi hàm xuất
    outputArr(a, n);
    // Gọi hàm đếm số nguyên tố
    int result = countPrimes(a, n);
    printf("Trong mang co %d so nguyen to.\n", result);
    return 0;
}
/*int main(){
	int x = 10;
	doubleX2(&x);
	printf("Gia tri x= %d: ", x);
*/
	/*
	int *p;
	p = &x; //con tro tên p trỏ đến
	printf("Dia chi duoc chua %u ",p);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);
	
	//x = x + x;
	*p = (*p) + (*p);
	printf("\nGia tri cua x la: %d",x);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);

	//p trỏ đến y
	int y = 5;
	p = &y; //p trỏ đến y
	printf("\nDia chi duoc chua %u ",p);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);
	*p = *p + x;
	printf("\nGia tri cua y la: %d",y);
	
	*/
