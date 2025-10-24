#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char s[101];
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &s);
        int lenth = strlen(s);
        if (lenth <= 10)
        {
            printf("%s\n", s);
        }
        else
        {

            char firstChr = s[0];
            char lastChr = s[lenth - 1];
            int lengthBetween = lenth - 2;

            printf("%c%d%c\n", firstChr, lengthBetween, lastChr);
        }
    }

    return 0;
}