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

    int idx;
    scanf("%d", &idx);
    int num;
    scanf("%d", &num);

    arr[idx] = num;


    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}