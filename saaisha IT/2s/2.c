#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P,R,T,SI;

    printf("ENTER PRINCIPAL AMOUNT:\n");
    scanf("%f", &P);

    printf("ENTER RATE OF INTREST:\n");
    scanf("%f",&R);

    printf("ENTER TOTAL INTREST (in years):\n");
    scanf("%f", &T);

    SI = (P*T*R) / 100;

    printf("SIMPLE INTREST = %.2f\n", SI);

    return 0;
}
