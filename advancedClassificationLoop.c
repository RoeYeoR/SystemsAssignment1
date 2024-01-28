#include <stdio.h>

#include <math.h>

#include "NumClass.h"



int getNumberOfDigits(int);



int isArmstrong(int num)

{

    int originalNum = num;

    int sum =0;

  while(num>0)

  {

   int powDigit = pow((num%10),getNumberOfDigits(num));

   num/=10;

   sum+=powDigit;

  }



  //ternary operator

  return (sum==originalNum) ? 1:0;

}



int isPalindrome(int num)

{

    int originalNum = num;

    int reversedNum = 0;

     

    while(num >0)

    {

      reversedNum*=10;

      reversedNum +=(num%10);

      num /=10;

     

    }



    return (reversedNum == originalNum) ? 1 : 0;

}



int getNumberOfDigits(int x)

{

    int counter =0;

    while(x>0)

    {

        counter++;

        x/=10;



    }

    return counter;


}