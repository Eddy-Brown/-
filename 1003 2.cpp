#include <stdio.h>

int Reverse(int x)//·­×ªº¯Êı
{
    int aft_Rev = 0, yu = 0;

    while (x)
    {
        yu = x % 10;
        aft_Rev = aft_Rev * 10 + yu;
        x /= 10;
    }
    return aft_Rev;
}

int main()
{
    int A = 0, B = 0, S = 0;
    while (scanf("%d %d", &A, &B) != EOF)
    {
        S = Reverse(A) + Reverse(B);
        printf("%d\n", S);
    }
        

    return 0;
}
