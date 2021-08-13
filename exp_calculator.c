//CS2211a 2020
//Assignment number 2
//Brendan Bain
//251086487
//bbain7
//Date completed Oct 5
#include <stdio.h>

float exponentialCalc(float b, int exp){
	float result;

	if (exp == 0){
		return 1;
	}

	if (exp == 1){
		return b;
	}

	if (exp > 0){
		if (exp % 2 == 0){  //exponent is even
			result = exponentialCalc(b, exp/2);
			return result*result;
		}
		else { //exponent is odd
			return b*exponentialCalc(b, exp - 1);
		}
	}
	if (exp < 0){
		return exponentialCalc(1/b, -exp); 
	}
}

int main (void){
	float base;
	int exponent, exit = 0;

	printf("enter a base: \n");
	scanf("%f", &base);

	while (base != 0){
		printf("enter the exponent: \n");
		scanf("%i", &exponent);
		printf("The result is %f\n",exponentialCalc(base, exponent));
		printf("enter a base: \n");
		scanf("%f", &base);
	 }
}
