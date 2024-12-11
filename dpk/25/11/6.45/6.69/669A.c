// 6.69 A
#include <stdio.h>

int main()
{
    // Data yang diberikan
    int n = 10;                                                                
    double x[] = {27.5, 13.4, 53.8, 29.2, 74.5, 87.0, 39.9, 47.7, 8.1, 63.2};  
    double f[] = {0.06, 0.08, 0.08, 0.10, 0.10, 0.10, 0.12, 0.12, 0.12, 0.12};

    double jumlah_berat = 0.0;  // Untuk menyimpan jumlah tertimbang
    double jumlah_faktor = 0.0; // Untuk memeriksa jumlah faktor (harus 1)

    // Menghitung jumlah tertimbang
    for (int i = 0; i < n; i++)
    {
        jumlah_berat += f[i] * x[i];
        jumlah_faktor += f[i]; // Menjumlahkan faktor-faktor untuk memeriksa apakah jumlahnya 1
    }

    // Menampilkan hasil
    printf("Rata-rata tertimbang: %.2f\n", jumlah_berat);
    printf("Jumlah faktor: %.2f\n", jumlah_faktor); // Memeriksa apakah jumlah faktor adalah 1

    return 0;
}
