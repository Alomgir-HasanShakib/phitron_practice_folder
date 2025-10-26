#include <stdio.h>

int main()
{
    char s[100001];
    scanf("%s", &s);

    int conson = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            conson++;
        }
    }
    printf("%d", conson);

    return 0;
}