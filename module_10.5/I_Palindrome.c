#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);

    int i = 0;
    int j = strlen(s) - 1;
    int isPalindrom = 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            isPalindrom = 0;
        }
        i++;
        j--;
    }

    if (isPalindrom)
        printf("YES");
    else
    {
        printf("NO");
    }

    return 0;
}