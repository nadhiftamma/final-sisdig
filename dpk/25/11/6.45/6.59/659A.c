// 6.59 A
#include <stdio.h>
#include <ctype.h>
#define EOL '\n'
main()
{
    char letter[80];
    int tag, count;

    for (count = 0; (letter[count] = getchar()) != EOL; ++count)
        ;
    tag = count;

    // menampilkan kalimat dalam huruf Kapital
    for (count = 0; count < tag; ++count)
        putchar(toupper(letter[count]));
}