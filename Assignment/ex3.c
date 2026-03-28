/*
struct sinhvien id(int), name (char ht[30], grade (float))
Nhập vào TT 1sv
ghi thông tin vào file baitap3.txt
101
Bao Han nc
5.5
đọc thông tin từ file
in ra màn hình
ex4: khai báo ds sv mảng struct
*/
#include <stdio.h>
#include <stdlib.h>

// Định nghĩa cấu trúc sinh viên
struct SinhVien {
    int id;
    char name[30];
    float grade;
};

int main() {
    FILE *fp;
    struct SinhVien sv;
    printf("Nhap ID: ");
    scanf("%d", &sv.id);
    getchar(); 
    printf("Nhap Name: ");
    fgets(sv.name, sizeof(sv.name), stdin);
    sv.name[strcspn(sv.name, "\n")] = 0;
    printf("Nhap Grade: ");
    scanf("%f", &sv.grade);
    fp = fopen("baitap3.txt", "w");
    if (fp == NULL) return 1;
    
    fprintf(fp, "%d\n%s\n%.1f\n", sv.id, sv.name, sv.grade);
    fclose(fp);
    printf("\n--- THONG TIN TU FILE ---\n");
    fp = fopen("baitap3.txt", "r");
    if (fp == NULL) return 1;

    struct SinhVien sv_read;
    fscanf(fp, "%d", &sv_read.id);
    fgetc(fp); 
    fgets(sv_read.name, sizeof(sv_read.name), fp);
    sv_read.name[strcspn(sv_read.name, "\n")] = 0;
    fscanf(fp, "%f", &sv_read.grade);

    printf("%d\n%s\n%.1f\n", sv_read.id, sv_read.name, sv_read.grade);
    fclose(fp);

    return 0;
}