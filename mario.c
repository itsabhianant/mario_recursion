#include <cs50.h>
#include <stdio.h>


void mario(int n);

int main(void)
{
    int a;
    do
    {
        a = get_int("height: ");
    }
    while(a > 8 || a < 0);
    mario(a);

}

void mario(int n)
{
    if (n == 0)
        return;

    else
        mario(n - 1);

    for (int i = 0; i < n; i ++)
    {
        printf("#");
    }
    printf("\n");
}