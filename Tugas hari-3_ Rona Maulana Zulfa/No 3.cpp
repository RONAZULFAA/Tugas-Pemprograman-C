#include <stdio.h>
#include <math.h> // Untuk fungsi sqrt()

int main() {
    // Deklarasi variabel untuk sisi alas, tinggi, dan sisi miring
    float alas, tinggi, sisiMiring;

    // Menginput panjang alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan panjang tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Panjang Alas: %.2f cm\n", alas);
    printf("Panjang Tinggi: %.2f cm\n", tinggi);
    printf("Panjang Sisi Miring: %.2f cm\n", sisiMiring);

    return 0;
}

