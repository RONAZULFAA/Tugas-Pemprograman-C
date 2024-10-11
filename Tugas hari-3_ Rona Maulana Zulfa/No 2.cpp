#include <stdio.h>

int main() {
    // Deklarasi variabel untuk suhu dalam Celcius, Fahrenheit, dan Reamur
    float celcius, fahrenheit, reamur;

    // Menginput suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);

    // Menghitung suhu dalam Fahrenheit
    fahrenheit = (celcius * 9/5) + 32;

    // Menghitung suhu dalam Reamur
    reamur = celcius * 4/5;

    // Menampilkan hasil
    printf("Suhu dalam Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f °R\n", reamur);

    return 0;
}

