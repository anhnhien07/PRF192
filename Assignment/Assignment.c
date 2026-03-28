#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Product {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
};
void writeProducts(const char *filename, int numProducts);
void appendProducts(const char *filename, int numProducts);
void readProducts(const char *filename);
void modifyProduct(const char *filename);

int main() {
    const char *filename = "products.bin";
    int choice, numProducts;

    do {
        printf("\n-- Product Management System --\n");
        printf("1. Write Products\n");
        printf("2. Append Products\n");
        printf("3. Read Products\n");
        printf("4. Modify Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of products to write: ");
                scanf("%d", &numProducts);
                writeProducts(filename, numProducts);
                break;
            case 2:
                printf("Enter the number of products to append: ");
                scanf("%d", &numProducts);
                appendProducts(filename, numProducts);
                break;
            case 3:
                readProducts(filename);
                break;
            case 4:
                modifyProduct(filename);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
            	printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
void writeProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "wb");
    struct Product p;
    while(getchar() != '\n');
    for (int i = 0; i < numProducts; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product ID: "); scanf("%d", &p.product_id);
        printf("Product Name: "); scanf("%s", p.product_name);
        printf("Price: "); scanf("%f", &p.price);
        printf("Quantity: "); scanf("%d", &p.quantity);
        fwrite(&p, sizeof(struct Product), 1, file);
    }
    fclose(file);
    printf("\nProducts have been written to the file successfully.\n");
}
void appendProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "ab");
    struct Product p;
    while(getchar() != '\n');
    for (int i = 0; i < numProducts; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product ID: "); scanf("%d", &p.product_id);
        printf("Product Name: "); scanf("%s", p.product_name);
        printf("Price: "); scanf("%f", &p.price);
        printf("Quantity: "); scanf("%d", &p.quantity);
        fwrite(&p, sizeof(struct Product), 1, file);
    }
    fclose(file);
    printf("Products have been appended to the file successfully.\n");
}
void readProducts(const char *filename) {
    FILE *file = fopen(filename, "rb");
    struct Product p;
    if (file == NULL) return;

    printf("\nReading products from the file:\n");
    printf("-----------------------------------------------------\n");
    printf("%-15s %-20s %-10s %-10s\n", "Product ID", "Product Name", "Price", "Quantity");
    printf("-----------------------------------------------------\n");

    while (fread(&p, sizeof(struct Product), 1, file)) {
        printf("%-15d %-20s %-10.2f %-10d\n", p.product_id, p.product_name, p.price, p.quantity);
    }
    printf("-----------------------------------------------------\n");
    fclose(file);
}
void modifyProduct(const char *filename) {
    FILE *file = fopen(filename, "rb+");
    int id, found = 0;
    struct Product p;
    printf("Enter the Product ID to modify: ");
    scanf("%d", &id);
    while(getchar() != '\n');
    while (fread(&p, sizeof(struct Product), 1, file)) {
        if (p.product_id == id) {
            found = 1;
            printf("Product found. Enter new details:\n");
            printf("New Product Name: "); scanf(" %[^\n]", p.product_name);
            printf("New Price: "); scanf("%f", &p.price);
            printf("New Quantity: "); scanf("%d", &p.quantity);
            while(getchar() != '\n');
            fseek(file, -sizeof(struct Product), SEEK_CUR);
            fwrite(&p, sizeof(struct Product), 1, file);
            printf("Product updated successfully.\n");
            break;
        }
    }
    if (!found) printf("Product not found.\n");
    fclose(file);
}