#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    int count[1000001] = {0};
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }

    for (int i = 1; i <= t; i++)
    {
        printf("%d\n", count[i]);
    }
}
