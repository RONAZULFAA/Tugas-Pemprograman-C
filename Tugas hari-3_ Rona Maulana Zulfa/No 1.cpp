#include <stdio.h>
#include <math.h> // Untuk fungsi sqrt()

int main() {
    // Deklarasi variabel untuk alas, tinggi, sisi miring, luas, dan keliling
    float alas, tinggi, sisiMiring, luas, keliling;

    // Menginput panjang alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menghitung keliling segitiga (alas + tinggi + sisi miring)
    keliling = alas + tinggi + sisiMiring;

    // Menampilkan hasil
    printf("Panjang Alas: %.2f cm\n", alas);
    printf("Panjang Tinggi: %.2f cm\n", tinggi);
    printf("Luas Segitiga: %.2f cm^2\n", luas);
    printf("Sisi Miring: %.2f cm\n", sisiMiring);
    printf("Keliling Segitiga: %.2f cm\n", keliling);

    return 0;
}

