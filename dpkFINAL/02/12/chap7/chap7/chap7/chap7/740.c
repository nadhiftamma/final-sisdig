#include <stdio.h>
#include <math.h>

// Fungsi untuk menghitung akar-akar nyata dari persamaan kuadrat
void cariAkar(int a, int b, int c)
{
    double diskriminan, x1, x2;

    // Menghitung diskriminan
    diskriminan = (b * b) - (4 * a * c);

    // Mengecek apakah diskriminan bernilai tidak negatif
    if (diskriminan > 0)
    {
        // Dua akar nyata yang berbeda
        x1 = (-b + sqrt(diskriminan)) / (2 * a);
        x2 = (-b - sqrt(diskriminan)) / (2 * a);
        printf("Akar-akarnya nyata dan berbeda:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if (diskriminan == 0)
    {
        // Satu akar nyata (akar kembar)
        x1 = -b / (2 * a);
        printf("Akar-akarnya nyata dan kembar:\n");
        printf("x1 = x2 = %.2f\n", x1);
    }
    else
    {
        // Tidak ada akar nyata
        printf("Persamaan ini tidak memiliki akar nyata.\n");
    }
}

int main()
{
    // Deklarasi koefisien a, b, dan c
    int a, b, c;

    // Meminta input dari pengguna untuk koefisien a, b, dan c
    printf("Masukkan nilai koefisien a: ");
    scanf("%d", &a);

    printf("Masukkan nilai koefisien b: ");
    scanf("%d", &b);

    printf("Masukkan nilai koefisien c: ");
    scanf("%d", &c);

    // Menampilkan persamaan yang diberikan
    printf("Persamaan yang diberikan: %dx^2 + %dx + %d = 0\n", a, b, c);

    // Memanggil fungsi cariAkar untuk menghitung akar-akar persamaan
    cariAkar(a, b, c);
    return 0;
}
