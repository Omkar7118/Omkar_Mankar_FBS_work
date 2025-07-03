#include<stdio.h>
void main()
{
int x = 0, y = 5;
if (++x || y--)
{
    printf("%d %d", x, y);
}
else
{
    printf("%d %d", --x, ++y);
}
}