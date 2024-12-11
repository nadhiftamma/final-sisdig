#include <stdio.h>

int main()
{
    int baris = 10; 

    for (int i = 1; i <= baris; i++)
    {
        // Menambahkan spasi di awal baris untuk perataan
        for (int spasi = 0; spasi < baris - i; spasi++)
        {
            printf(" "); 
        }
        // Mencetak urutan angka yang meningkat
        for (int j = i; j < 2 * i; j++)
        {
            printf("%d", j); 
        }
        // Mencetak urutan angka yang menurun
        for (int j = 2 * i - 2; j >= i; j--)
        {
            printf("%d", j); 
        }
        printf("\n"); // Pindah ke baris berikutnya setelah selesai mencetak satu baris
    }

    return 0;
}
