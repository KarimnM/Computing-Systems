// Include Files
#include <stdio.h>
// Project Includes
#include "lab3header.h"
// Function Implementations

int reverse_number(int num)
{
 int reversed = 0;
  while(num > 0)
  {
	  reversed = reversed * 10 + num % 10;
	  num = num / 10;
  }
  return reversed;

}

int even_odd(int num)
{
if(num%2==0)
 return 0;

else return 1;
}


int is_prime(int num)
{

int i;	if(num<=1){
	return 0;
}	
	for(i=2; i<=num;i++){
		if(num%i==0&&i!=num)
		return 0;
		


}         
	 return 1;
}



int sumall(int a[] , int size)
{
int i, sum = 0;
	for (i=0;i<size;i++)
	sum += a[i];
	return sum;
}


int power(int base, int exponent)
{
if(exponent ==0)
	return 1;
else if (exponent == 1)
	return base;
else
	return base * power(base, exponent-1);
}




