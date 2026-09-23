#include<stdio.h>

int check(int n);
void hello(int n);

int main()
{
    int n;
    n = check(n);
    hello(n);
}

int check(int n)
{
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n<0)
    {
        printf("Please enter a positive number: ");
        scanf("%d", &n);
    }
    return n;
}

void hello(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Hello\n");
    }
}