#include <stdio.h>

int main() {
    // Deklarasi variabel untuk alas dan tinggi
    float alas = 8.0;  // Alas dalam cm
    float tinggi = 5.0; // Tinggi dalam cm
    float luas;         // Variabel untuk menyimpan hasil luas

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menampilkan hasil
    printf("Panjang Alas: %.2f cm\n", alas);
    printf("Tinggi: %.2f cm\n", tinggi);
    printf("Luas Segitiga: %.2f cm^2\n", luas);

    return 0;
}

