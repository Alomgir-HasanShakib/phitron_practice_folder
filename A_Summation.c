#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    long long arr[N];
    long long sum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }

    if (sum < 0)
        sum = -sum;

    printf("%lld\n", sum);
    return 0;
}
