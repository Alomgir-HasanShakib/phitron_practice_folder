#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        do
        {
            printf("%d ", x % 10);
            x /= 10;
        } while (x != 0);

        printf("\n");
    }

    return 0;
}

// ekhane first e n diye input neya hocche j koto gulo line e number deya hobe.
// tar pore number niye loop calano hoyeche . loop er vitore bole hocche j notun kore ekta input nao x. jekhane number store hobe. tarpor bola hoyeche ei kaj ta totokkhon porjonto koro jotokkon na x = 0 hoy. do while use kora hoyeche karon jodi first number tai 0 hoy taholeu jeno seta print kore.

// do er vitore x%10 kore vagsesh mane number er ekdom sesher ta neya hocche. tarpor x/=10 diye  last digit bad deya hocche.