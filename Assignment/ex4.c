#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SinhVien {
    int id;
    char name[30];
    float grade;
};
int main() {
    FILE *fp;
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct SinhVien ds[n];
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &ds[i].id);
        getchar();
        printf("Name: ");
        fgets(ds[i].name, sizeof(ds[i].name), stdin);
        ds[i].name[strcspn(ds[i].name, "\n")] = 0;

        printf("Grade: ");
        scanf("%f", &ds[i].grade);
    }
    fp = fopen("baitap4.txt", "w");
    if (fp == NULL) return 1;

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d|%s|%.1f\n", ds[i].id, ds[i].name, ds[i].grade);
    }
    fclose(fp);
    printf("\n--- DANH SACH SINH VIEN TU FILE ---\n");
    printf("%-10s %-20s %-10s\n", "ID", "Name", "Grade");
    printf("------------------------------------------\n");

    fp = fopen("baitap4.txt", "r");
    if (fp == NULL) return 1;
    struct SinhVien sv_read;
    while (fscanf(fp, "%d|%[^|]|%f\n", &sv_read.id, sv_read.name, &sv_read.grade) != EOF) {
        printf("%-10d %-20s %-10.1f\n", sv_read.id, sv_read.name, sv_read.grade);
    }
    fclose(fp);

    return 0;
}