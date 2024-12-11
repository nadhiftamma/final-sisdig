//6.45 A
#include <stdio.h>

int main()
{
    int i = 2;
    int sum = 0;

    while (i < 100)
    {
        sum += i;
        i += 3;
    }

    printf("Sum using while loop: %d\n", sum);
    return 0;
}
