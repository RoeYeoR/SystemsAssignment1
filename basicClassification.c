#include <stdio.h>


#include "NumClass.h"

float squareRoot(float num);

long factorial(int);

int isPrime(int num)

{

    if (num==1 || num ==2)

    {

        return 1;

    }

    for(int i =2; i<= (squareRoot(num));i++)

    {

        if(num%i==0)

            return 0;

    }

    return 1;

}
float squareRoot(float num) {
     float guess = num / 2; 
    float epsilon = 0.0001;   

   
    for (int i = 0; i < 1000; i++) {
        guess = 0.5 * (guess + num / guess);

       
        if (num - guess * guess < epsilon)
            break;
    }

    return guess;
}



int isStrong(int num)

{

    int sum=0;

    int originalNum  = num;

    while(num>0)

    {

        int factorDigit  = (factorial(num%10));

        sum += factorDigit;

        num /=10;

    }

    return (sum==originalNum) ? 1 : 0;


}

long factorial(int num)

{

    for(int i=num-1;i>0;i--)

    {

    	num *= i;

    }

    		

   return num;     

}
