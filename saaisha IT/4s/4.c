#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("eneter a year:\n");
    scanf("%d", &year);

    if (( year % 4 == 0 && year % 100 != 0)||(year % 400 == 100 ))
        printf("%d is a leap year: ",year);
    else
        printf("%d is not a leap year");

    return 0;
}
