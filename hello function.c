#include <stdio.h>

void hello();

int main()
{
    for(int i=0; i<3; i++)
    {
        hello();
    }
}

void hello()
{
    printf("Hello\n");
}