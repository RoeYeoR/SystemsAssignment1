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
    float x = num;
    float y = 1;
    float epsilon = 0.00001; // Define the desired precision
    
    while (x - y > epsilon) {
        x = (x + y) / 2;
        y = num / x;
    }
    return x;
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
