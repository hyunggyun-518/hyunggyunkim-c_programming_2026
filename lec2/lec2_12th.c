#include <stdio.h>

int main()
{

    int from = 8;
    int to = 16;
    int baesu =40;

    int d;
    for (d = from; d <= to; d++)
    {
        if (d % baesu == 0)
        {
            printf("from %d to %d, minimum %d number is %d ", from, to, baesu, d);
            break;
        }
        else {
            printf("from %d to %d, minimum %d no number exists", from, to, baesu);
        }
    }
    return 0;
}