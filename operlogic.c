#include <stdio.h>
int main()
{
    int a = 5, b = 10, c = 5;
    printf("\n(a == b) && (a == b) = %d", ((a == b) && (a == c)));
    printf("\n(a == b) || (a == b) = %d", ((a == b) || (a == c)));
    printf("\n !(a == b) || (a == b) = %d", ((a == b) || (a == c)));
}