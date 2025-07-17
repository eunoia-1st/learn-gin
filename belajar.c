#include <stdio.h>

int main() {
    char nama[50];  // Array untuk menyimpan nama

    printf("Tulis nama Anda: ");
    scanf("%49s", nama);  // Membaca input string

    printf("Halo, %s! Selamat belajar C.\n", nama);

    return 0;
}
