//Muh.Nadhiftamma Ayatilla A.P
//Chapter 9 nomor 9.47 a
#include <stdio.h>

int main()
{
    // Dimensi Matriks
    int m = 6, n = 8;

    // Matriks A (6x8)
    int A[6][8] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {2, 3, 4, 5, 6, 7, 8, 9},
        {3, 4, 5, 6, 7, 8, 9, 10},
        {4, 5, 6, 7, 8, 9, 10, 11},
        {5, 6, 7, 8, 9, 10, 11, 12},
        {6, 7, 8, 9, 10, 11, 12, 13}};

    // Vektor X (8 elemen)
    int X[8] = {1, -8, 3, -6, 5, -4, 7, -2};

    // Vektor hasil Y (6 elemen)
    int Y[6];

    // Menampilkan Matriks A
    printf("Matriks A (6x8):\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Menampilkan Vektor X
    printf("\nVektor X:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", X[i]);
    }
    printf("\n");

    // Melakukan perkalian matriks dan vektor untuk menghitung Y
    for (int i = 0; i < m; i++)
    {
        Y[i] = 0; // Inisialisasi Y[i] dengan 0
        for (int j = 0; j < n; j++)
        {
            Y[i] += A[i][j] * X[j]; // Perkalian titik untuk baris i
        }
    }

    // Menampilkan Vektor Y hasil
    printf("\nVektor Hasil Y:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", Y[i]);
    }
    printf("\n");

    return 0;
}
