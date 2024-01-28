#include <stdio.h>

#include "NumClass.h"



int main() {

int min,max;

    int y, x;

    scanf("%d%d",&y,&x);
if(x>y)
{
min=y;
max=x;
}
else
{
    min=x;
    max=y;
}


    printf("The Armstrong numbers are:");

    for (int i = min; i <= max; ++i)

    {

        if (isArmstrong(i))

            printf(" %d", i);

    }



    printf("\nThe Palindromes are:");

    for (int i = min; i <= max; ++i)

    {

        if (isPalindrome(i))

            printf(" %d", i);

    }



    printf("\nThe Prime numbers are:");

    for (int i = min; i <= max; ++i)

    {

        if (isPrime(i))

            printf(" %d", i);

    }



    printf("\nThe Strong numbers are:");

    for (int i = min; i <= max; ++i)

    {

        if (isStrong(i))

             printf(" %d", i);

    }



    printf("\n");



    return 0;

}
