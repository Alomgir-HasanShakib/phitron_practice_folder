#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int devidedByTwo = 0;
    int devidedByThree = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            devidedByTwo++;
        }
        else if (arr[i] % 2 == 0)
        {
            devidedByTwo++;
        }
        else if (arr[i] % 3 == 0)
        {
            devidedByThree++;
        }
    }
    printf("%d %d", devidedByTwo, devidedByThree);
}
