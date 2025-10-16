#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    for (int i = 1; i <= num; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            even += 1;
        }
        else if (n < 0)
        {
            neg += 1;
            if (n % 2 == 0)
            {
                even += 1;
            }
            else
            {
                odd += 1;
            };
        }
        else
        {
            pos += 1;
            if (n % 2 == 0)
            {
                even += 1;
            }
            else
            {
                odd += 1;
            }
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
}