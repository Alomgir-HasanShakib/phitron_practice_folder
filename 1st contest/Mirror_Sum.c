#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arrA[n];
    int arrB[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrA[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrB[i]);
    }

    int result[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = arrA[i] + arrB[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    
}
