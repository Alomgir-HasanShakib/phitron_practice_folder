#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        // 10 jon manusher ekti kaj korte lage 15 din (d=15)
        /* 1 jon manusher kaj ti korte lage */ int total_days = m1 * d;

        int totalFarmer = m1 + m2;
        /* 15 jon manusher kaj ti korte lage  15*10 / 15 = 15 */
        int dayFor15Farmer = total_days / totalFarmer;

        // tahole 15 jon farmer er kaj ti korte time kom lagbe 15-10 = 5;

        int fewerDays = d - dayFor15Farmer;

        printf("%d\n", fewerDays);
    }
}
