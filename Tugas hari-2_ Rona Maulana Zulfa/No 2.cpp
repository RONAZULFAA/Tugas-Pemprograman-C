#include <stdio.h>
#define PI 3.14159 // Mendefinisikan nilai PI

int main() {
    // Deklarasi variabel untuk diameter, jari-jari, dan volume
    float diameter = 15.0;           // Diameter dalam cm
    float jariJari = diameter / 2.0; // Menghitung jari-jari
    float volume;                    // Variabel untuk menyimpan hasil volume

    // Menghitung volume bola
    volume = (4.0 / 3.0) * PI * (jariJari * jariJari * jariJari);

    // Menampilkan hasil
    printf("Diameter: %.2f cm\n", diameter);
    printf("Jari-jari: %.2f cm\n", jariJari);
    printf("Volume Bola: %.2f cm^3\n", volume);

    return 0;
}

