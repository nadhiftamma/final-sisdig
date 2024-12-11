// Muh. Nadhiftamma Ayatilla A.P
// Chapter 7 nomor 7.47
#include <stdio.h>

int main()
{
    // Deklarasi variabel untuk menyimpan angka desimal, total, dan rata-rata
    float angka[10], total = 0.0, rata_rata;

    // Meminta pengguna untuk memasukkan 10 angka desimal
    printf("Masukkan 10 angka desimal:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Angka %d: ", i + 1);
        scanf("%f", &angka[i]); // Input angka desimal
        total += angka[i];      // Menambahkan angka ke total
    }

    // Menghitung rata-rata
    rata_rata = total / 10;

    // Menampilkan total dan rata-rata
    printf("\nTotal dari angka-angka yang dimasukkan: %.2f\n", total);
    printf("Rata-rata dari angka-angka yang dimasukkan: %.2f\n", rata_rata);

    return 0;
}
