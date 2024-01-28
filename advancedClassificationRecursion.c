#include <stdio.h>


#include "NumClass.h"


int getNumOfDigits(int);

int isArmStrongHelper(int, int);

int isPalindromeHelper(int,int);

int power(int , int);

int isArmstrong(int num)

{

    int originalNum = num;



    return (originalNum == isArmStrongHelper(num , getNumOfDigits(num))) ? 1 : 0;



}

int isArmStrongHelper(int num,  int numOfDigits)

{

    if(num==0)

        return 0;

    return  power(num%10, numOfDigits) + isArmStrongHelper(num/10, numOfDigits);

}



int isPalindrome(int num)

{

    int originalNum = num;

    return (originalNum == isPalindromeHelper(num, getNumOfDigits(num))) ? 1 : 0;


}

int isPalindromeHelper(int num , int i)

{

    if(num==0)

        return 0;

    return (num % 10) * power(10,i-1) + isPalindromeHelper(num/10, i-1);
}

int getNumOfDigits(int x)

{

    int counter =0;

    while(x>0)

    {
        counter++;

        x/=10;
    }

    return counter;

}

int power(int base, int exponent) {
     int result =1;
    for(int i =0;i<exponent;i++)
     {
         result*=base
     }
    return result;
}
