#include <stdio.h>

int main(void)
{
    int fibonacci = 10;
    int val = 1, ac = 1, num = 0;
    printf("0 ", val);

    for (int i = 1; i < fibonacci; ++i)
    {
        ac = num;
        printf("%d ", val);
        num = val;
        val += ac;
    }

    return 0;
}
