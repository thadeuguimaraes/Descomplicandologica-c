#include <stdio.h>
int main(void)
{
    printf("\n ARARA == ARARA? %d", strcmp("ARARA", "ARARA"));
    printf("\n ARARA == BANANA? %d", strcmp("ARARA", "BANANA"));
    printf("\n BANANA == ARARA? %d", strcmp("BANANA", "ARARA"));
}