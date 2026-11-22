#include<stdio.h>

// Declaration
void hello(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    hello(n);
}

void hello(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Hello\n");
    }
}