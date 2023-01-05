#include <stdio.h>

int main(void)
{
    int max = 10;
    for (int i = 1; i < 2 * max; i += 2)
    {
        printf("Impar: %d\n", i);
    }

    return 0;
}
