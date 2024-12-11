//6.45 C
#include <stdio.h>

int main()
{
    int sum = 0;

    // Using for loop, starting from 2, stepping by 3, and ending before 100
    for (int i = 2; i < 100; i += 3)
    {
        sum += i;
    }

    printf("Sum using for loop: %d\n", sum);
    return 0;
}
