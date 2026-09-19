#include<stdio.h>
int main()
{
    printf("Do you agree?\n");
    char q;
    scanf(" %c", &q);
    
    if (q == 'y' || q == 'Y')
        printf("You agreed.\n");
    else if (q == 'n' || q == 'N')
        printf("You disagreed.\n");
    else
        printf("Invalid input.\n");
}