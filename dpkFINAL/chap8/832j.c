// Muh. Nadhiftamma Ayatilla A.P
// chapter 8 nomor 8.32 j
#include <stdio.h>

// Fungsi rekursif untuk menghitung angka Fibonacci ke-n
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1; // Basis: F1 = 1, F2 = 1
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // Rumus rekursif
    }
}

int main()
{
    int n;

    // Meminta input dari pengguna
    printf("Masukkan nilai n untuk mencari angka Fibonacci ke-n: ");
    scanf("%d", &n);

    // Memastikan input n valid
    if (n <= 0)
    {
        printf("Nilai n harus lebih besar dari 0.\n");
    }
    else
    {
        // Memanggil fungsi fibonacci dan menampilkan hasilnya
        printf("Fibonacci ke-%d adalah: %d\n", n, fibonacci(n));
    }

    return 0;
}
