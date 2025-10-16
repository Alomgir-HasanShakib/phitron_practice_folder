#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sumPos = 0, sumNeg = 0;
    int val;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        if (val > 0)
        {
            sumPos += val;
        }
        else if (val < 0)
        {
            sumNeg += val;
        }
    }
    printf("%d %d\n", sumPos, sumNeg);

    return 0;
}
