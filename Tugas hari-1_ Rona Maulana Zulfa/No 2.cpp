#include <stdio.h>

int main() {
    // Deklarasi variabel untuk panjang dan lebar
    float panjang = 10.0;  // Panjang dalam cm
    float lebar = 7.0;     // Lebar dalam cm
    float luas;            // Variabel untuk menyimpan hasil luas

    // Menghitung luas persegi panjang
    luas = panjang * lebar;

    // Menampilkan hasil
    printf("Panjang: %.2f cm\n", panjang);
    printf("Lebar: %.2f cm\n", lebar);
    printf("Luas Persegi Panjang: %.2f cm^2\n", luas);

    return 0;
}

