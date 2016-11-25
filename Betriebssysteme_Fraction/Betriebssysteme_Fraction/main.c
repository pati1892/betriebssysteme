#include <stdio.h>
#include <stdlib.h>

struct fraction{
    int dividend;
    int divisor;
}typedef Fraction;

int ggt(int a, int b){
	int h = 0;
	while(b != 0){
		h = a%b;
		a=b;
		b=h;
	}
	return a;	
}

void *reduceFraction(Fraction *fraction){

	int a = ggt(fraction->dividend, fraction->divisor);
	fraction->dividend = fraction->dividend/a;
	fraction->divisor = fraction->divisor/a;
}

void readFraction(Fraction* fraction){

    	printf("Dividend: ");
    	scanf("%d", &fraction->dividend);
	
   	printf("Divisor: ");
    	scanf("%d", &fraction->divisor);
	reduceFraction(fraction);

}

void printFraction(Fraction *fraction){
	if(fraction->dividend > fraction->divisor){
		int div = fraction->dividend / fraction->divisor;
		int mod = fraction->dividend%fraction->divisor;
		printf("%d %d / %d\n", div, mod, fraction->divisor);
	}else
    		printf("%d / %d\n", fraction->dividend, fraction->divisor);
}

int compareFraction(Fraction *first, Fraction *second){
	int eDividend = first->dividend-second->dividend;
	int eDivisor = first->divisor-second->divisor;
	if(eDividend == 0 && eDivisor == 0) return 0;
	else return 1;	

}

Fraction *addFractions(Fraction *first, Fraction *second){

	Fraction *newFraction=(Fraction*)malloc(sizeof(Fraction));
	newFraction->dividend=(first->dividend)*(second->divisor)+(second->dividend)*(first->divisor);
	newFraction->divisor=first->divisor*second->divisor;

	reduceFraction(newFraction);
	return newFraction;
}

Fraction *multiplyFractions(Fraction *first, Fraction *second){
	Fraction *newFraction=(Fraction*)malloc(sizeof(Fraction));
	newFraction->dividend=first->dividend*second->dividend;
	newFraction->divisor=first->divisor*second->divisor;

	reduceFraction(newFraction);
	return newFraction;
}

int main(){
    	Fraction frac1, *pfrac1;
	Fraction frac2, *pfrac2;
	pfrac1 = &frac1;
	pfrac2 = &frac2;
	

	readFraction(pfrac1);
	printFraction(pfrac1);

	readFraction(pfrac2);
	printFraction(pfrac2);

	
	printFraction(addFractions(pfrac1, pfrac2));
	printFraction(multiplyFractions(pfrac1, pfrac2));
	printf("equal: %d\n", compareFraction(pfrac1, pfrac2));

}
