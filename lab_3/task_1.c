#include<stdio.h>

int main() {
    printf("%-20s|%10s|%-15s|%10s|\n", "Pokemon Name", "Dex No.", "Type", "Height");
    printf("%-20s|%10d|%-15s|%10.2f|\n", "Pikachu", 25, "Electric", 0.40);
    printf("%-20s|%10d|%-15s|%10.2f|\n", "Bulbasaur", 1, "Grass", 0.71);
    printf("%-20s|%10d|%-15s|%10.2f|\n", "Charizard", 6, "Fire", 1.70);
    return 0;
}