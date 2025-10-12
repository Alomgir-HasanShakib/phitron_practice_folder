#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int leftAmount = n;

    if (leftAmount <= 1000)
    {
        printf("Bad luck!\n");
    }
    else
    {

        printf("I will buy Punjabi\n");
        leftAmount = leftAmount - 1000;

        if (leftAmount >= 500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }

    // printf("%d", leftAmount);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
