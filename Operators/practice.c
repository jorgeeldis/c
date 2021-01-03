#include <stdio.h>

int main(){
    int x = 8, y = 7;
    x++;
    x += y--;
    printf("%d", x);

    return 0;
}