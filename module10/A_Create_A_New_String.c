#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    char t[10001];
    scanf("%s", &s);
    scanf("%s", &t);

    printf("%d %d\n%s %s", strlen(s), strlen(t), s, t);
    return 0;
}