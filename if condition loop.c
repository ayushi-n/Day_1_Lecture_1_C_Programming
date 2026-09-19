#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter x value: ");
    scanf("%d", &x);
    printf("Enter y value: ");
    scanf("%d", &y);
    if (x < y)
        printf("y is greater than x");
    else if (x > y)
        printf("x is greater than y");
    else
        printf("x is equal to y");
    return 0;
}