#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    char s[10001];
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &s);
        int digit = 0;
        int capital = 0;
        int small = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}