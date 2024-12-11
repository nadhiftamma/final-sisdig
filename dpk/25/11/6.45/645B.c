//6.45 B
#include <stdio.h>

int main()
{
    int i = 2;
    int sum = 0;

    do
    {
        sum += i;
        i += 3;
    } while (i < 100);

    printf("Sum using do-while loop: %d\n", sum);
    return 0;
}
