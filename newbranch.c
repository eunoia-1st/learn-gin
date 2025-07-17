#include <stdio.h>

int main() {
    char nama[50];  // Array untuk menyimpan nama

    printf("Dimana Anda sekarang: ");
    scanf("%49s", nama);  // Membaca input string

    printf("Halo, %s\n", nama);

    return 0;
}
