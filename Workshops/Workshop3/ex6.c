#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void play_game() {
    srand(time(NULL)); 
    int random = rand()%100+1;
    int doan;
    int luot = 7; // Toi da 7 luot
    printf("GAME DOAN SO\n");
    printf("Ban co %d luot doan!\n", luot);
    for (int i = 1; i <= luot; ) {
        printf("\nLuot thu %d - Nhap so ban doan: ", i);
        if (scanf("%d", &doan) != 1) {
            printf("Nhap sai. Nhap lai!\n");
            	fflush(stdin);
            continue; 
        }
        if (doan < 1 || doan > 100) {
            printf("Nhap sai. Nhap lai!\n");
            continue; 
        }
        if (doan == random) {
            printf("CHUC MUNG! Ban da doan dung!");
            break; 
        } else if (doan < random) {
            printf("Lon hon!");
        } else {
            printf("Nho hon!");
        }
        i++; //  doan sai mat 1 luot
        if (i > luot) {
            printf("\nBan da het luot. Dap an la: %d\n", random);
        }
    }
}

int main() {
    play_game();
    return 0;
}