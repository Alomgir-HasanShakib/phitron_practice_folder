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

    int min_val = arr[0];
    int max_val = arr[n - 1];
    int min_idx = 0;
    int max_idx = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (min_val > arr[i])
        {
            min_val = arr[i];
            min_idx = i;
        }
        else if (max_val < arr[i])
        {
            max_val = arr[i];
            max_idx = i;
        }
    }

    arr[min_idx] = max_val;

    arr[max_idx] = min_val;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
