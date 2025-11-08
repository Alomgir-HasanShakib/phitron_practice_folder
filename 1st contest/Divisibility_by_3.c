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


'Jasmina Khatun 71125',
'Mahadev Palai 71109',
'Pallabi Samanta 71112',
'Shyamashree Mukherjee 71123',
'Rajkumar Pal 71118',
'SANTANU ROY CHOWDHURY 71137',
'Subhendu Ghosh 71111',
'Nitin Mistry 71120',
'Tina mahata 71116',
'Nandani ram 71117',
'Mandira chalak 71110',
'Arnab ghosh 71114',
'Tanmoy Das 71121',
'Sejuti Chakraborty 71124',
'Sourav Mhata 71113',
'Sk Ijramul 71115',
'Dependu Das 71119',
'Beauty Sen 71122',
'Jit Bhuniya 71126',
'Suman Maity 71127',
'Ria Mondal 71128',
'Sarala Mahato 71129',
'Anita Yadav 71130',
'Anindita Ghosh 71131',
'Halima Khatun 71132',
'Mouli Bhattacharya 71133',
'Riya Mahata 71138',
'Susmita Mahata 71139',
'Sanchita Dandapat 71140',
'Manasi Ghosh 71141',
'Rajesh Digar 71168',
'Barsha Dolai 71166',
'Pralay pahan 71171',
'Shubhamoy Das 71170',
'Chumki Chatterjee 71172',
'Md rofik khan 71174',
'Swastika Singha 71173',
'SUSMITA DOLAI 71176',
'RUPALI MUDI 71177'
