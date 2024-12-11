// Muh.Nadhiftamma Ayatilla A.P
// Chapter 10 nomor 10.74
#include <stdio.h>

int main()
{
    int n = 5;
    float list[] = {3, -2, 12, 4.4, 3.5};
    int count;
    float avg, d, sum = 0;

    int *pcount = &count;
    float *pd = &d;
    float *pavg = &avg;
    float *psum = &sum;

    // mengkalkulasi dan meampilkan rata-rata
    for (*pcount = 0; *pcount < n; ++(*pcount))
    {
        *psum += list[*pcount];
    }
    *pavg = *psum / n;
    printf("\nThe average is %5.2f\n\n", *pavg);

    // mengkalkulasi dan menampilkan deviasi dari rata-rata
    for (*pcount = 0; *pcount < n; ++(*pcount))
    {
        *pd = list[*pcount] - *pavg;
        printf("i = %d  x = %5.2f  d = %5.2f\n", *pcount + 1, list[count], *pd);
    }

    return 0;
}