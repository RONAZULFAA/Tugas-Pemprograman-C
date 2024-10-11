#include <stdio.h>
#include <math.h> // Untuk fungsi sqrt()

int main() {
    // Deklarasi variabel untuk alas, tinggi, dan sisi miring
    float alas = 4.0;   // Alas dalam cm
    float tinggi = 5.0; // Tinggi dalam cm
    float sisiMiring;   // Variabel untuk menyimpan hasil sisi miring

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Panjang Alas: %.2f cm\n", alas);
    printf("Panjang Tinggi: %.2f cm\n", tinggi);
    printf("Panjang Sisi Miring: %.2f cm\n", sisiMiring);

    return 0;
}

