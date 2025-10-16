#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n))
    {
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
}

// ekhane while loop use kora hoyeche karon problem e bola chilona kotobar input nebe, tai ekhane EOF method use kora hoyeche jeita End Of file represent kore. mane totokkhon porjonto oparation calau jotokkhon porjonto condition true na hocche.