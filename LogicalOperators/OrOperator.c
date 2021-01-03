#include <stdio.h>

int main()
{
    char n = 'x';
    int m = 42;

    if (n == 'x' || n == 'X')
        printf("Roman numeral value for 10 \n");
    if ( m == 999 || (m > 0 && m <= 100))
        printf("Input valid \n");

    return 0;
}