#include <stdio.h>
int main()
{
    int index = 5;
    int c =0;
    for (; index != 1; index--)
    {
        c ++;
    }
    printf("%d%d\n",index,c);
    return 0;
}