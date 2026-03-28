/*#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    fprintf(fp, "%d\n", n); 
    int a[n];
    //printf("Nhập vào từng phần tử của mảng:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        fprintf(fp, "%d\t", a[i]); 
    }

  //đóng file
	fclose(fp);
	//sửa dưới dòng này
//Doc file
	fp = fopen("baitap1.txt","r");
	if (fp==NULL) {
		printf("Error!");
		return 0;
	}
	
	char s;
	do {
		s = getc(fp); //đọc từn kí tự 1 trên file
		printf("%c",s);
	} while (s!=EOF);
	fclose(fp);
	return 0;
}
*/
#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    // --- BƯỚC 1: NHẬP DỮ LIỆU ---
    printf("Nhap vao n: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap vao tung phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // --- BƯỚC 2: GHI VÀO FILE baitap2.txt ---
    fp = fopen("baitap2.txt", "w");
    if (fp == NULL) return 1;

    fprintf(fp, "%d\n", n); // Ghi n và xuống dòng
    for (i = 0; i < n; i++) {
        fprintf(fp, "%d ", a[i]); // Ghi từng phần tử cách nhau khoảng trắng
    }
    fclose(fp);

    // --- BƯỚC 3: ĐỌC FILE VÀ IN RA MÀN HÌNH ---
    fp = fopen("baitap2.txt", "r");
    if (fp == NULL) return 1;

    char s;
    // Đọc từng ký tự cho đến hết file và in ra
    while ((s = fgetc(fp)) != EOF) {
        printf("%c", s);
    }

    fclose(fp);
    return 0;
}