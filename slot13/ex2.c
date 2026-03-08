#include<stdio.h>
#define MAX 100
void InMenu(){
	printf("-----------------------\nMENU\n1- Add a value\n2- Search a value\n3- Remove the first existence of a value\n4- Remove all existences of a value\n5- Print out the array\n6- Print out the array in ascending order\n7- Print out the array in descending order\nOthers- Quit\nMoi chon:");
	
}
int main(){
	int a[MAX];
	int n =0;
	int chon, giatri,i,found,j;
	do {
		InMenu();
		scanf("%d", &chon);
        switch (chon) {
            case 1: // Thêm giá trị
                if (n < MAX) {
                    printf("Enter value to add: ");
                    scanf("%d", &giatri);
                    a[n] = giatri;
                    n++;
                    printf("Added successfully!\n");
                }
				else
                    printf("Array is full!\n");
                break;

            case 2: // Tìm kiếm
                printf("Enter value to search: ");
                scanf("%d", &giatri);
                found = -1;
                for (i = 0; i < n; i++) {
                    if (a[i] == giatri) {
                        found = i;
                        break;
                    }
                }
                if (found != -1) printf("Found at index: %d\n", found);
                else printf("Not found!\n");
                break;

            case 3: // Xóa phần tử đầu tiên tìm thấy
                printf("Enter value to remove: ");
                scanf("%d", &giatri);
                for (i = 0; i < n; i++) {
                    if (a[i] == giatri) {
                        for (j = i; j < n - 1; j++) 
						a[j] = a[j+1];
                        n--;
                        printf("Removed!\n");
                        break;
                    }
                }
                break;

            case 4: // Xóa tất cả các phần tử trùng khớp
                printf("Enter value to remove all: ");
                scanf("%d", &giatri);
                for (i = 0; i < n; ) {
                    if (a[i] == giatri) {
                        for (j = i; j < n - 1; j++) a[j] = a[j+1];
                        n--;
                    } else {
                        i++;
                    }
                }
                printf("All existences removed!\n");
                break;

            case 5: // In mảng
                printf("Array: ");
                for (i = 0; i < n; i++) printf("%d ", a[i]);
                printf("\n");
                break;
            case 6: // In tăng dần (không đổi mảng gốc)
            case 7: // In giảm dần (không đổi mảng gốc)
                if (n == 0)
                    printf("Array is empty!\n");
                else {
                    int tempArr[MAX];
                    for(i=0; i<n; i++) 
					tempArr[i] = a[i];
                    for(i=0; i<n-1; i++) {
                        for(j=0; j<n-i-1; j++) {
                            if ((chon==6 && tempArr[j]>tempArr[j+1])||(chon==7 && tempArr[j]<tempArr[j+1])) {
                                int temp = tempArr[j];
                                tempArr[j] = tempArr[j+1];
                                tempArr[j+1] = temp;
                            }
                        }
                    }
                    printf("Sorted array: ");
                    for(i=0; i<n; i++) printf("%d ", tempArr[i]);
                    printf("\n");
                }
                break;
            default:
                printf("Quit!\n");
                return 0;
        }
    } while (1);

    return 0;
}
