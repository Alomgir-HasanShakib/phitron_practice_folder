#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char num[1000001];
    scanf("%s", num);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (num[i] - '0');
    }

    if (sum % 3 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
