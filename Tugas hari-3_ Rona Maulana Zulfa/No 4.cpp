#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menyimpan bilangan bulat positif
    int bilangan;

    // Menginput bilangan bulat positif
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memeriksa apakah bilangan positif
    if (bilangan < 0) {
        printf("Silakan masukkan bilangan bulat positif.\n");
    } else {
        // Memeriksa apakah bilangan genap atau ganjil
        if (bilangan % 2 == 0) {
            printf("Bilangan %d adalah GENAP.\n", bilangan);
        } else {
            printf("Bilangan %d adalah GANJIL.\n", bilangan);
        }
    }

    return 0;
}

