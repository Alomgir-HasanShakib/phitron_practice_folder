#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001], s2[1001], s3[1001];
    scanf("%s %s", s1, s2);

    int start, end;
    scanf("%d %d", &start, &end);

    int j = 0;
    for (int i = start; i <= end; i++)
    {
        s3[j] = s2[i];
        j++;
    }
    s3[j] = '\0';

    strcat(s1, s3);

    printf("%s", s1);
    return 0;
}
