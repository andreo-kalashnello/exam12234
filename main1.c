#include <stdio.h>

bool isFourNumsDifferent(int num) {
 
    if (num >= 1000 && num <= 9999) {
        int thousands = num / 1000;
        int hundreds = (num / 100) % 10;
        int tens = (num / 10) % 10;
        int units = num % 10;

        return (thousands != hundreds) && (thousands != tens) && (thousands != units) &&
               (hundreds != tens) && (hundreds != units) &&
               (tens != units);
    } else{
	    return false;
	}
    
}

bool endsWith369(int num) {
    int lastDigit = num % 10;
    return (lastDigit == 3) || (lastDigit == 6) || (lastDigit == 9);
}

bool hasNumZero(int num) {
    
    if (num >= 100 && num <= 999) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;

        return (hundreds == 0) || (tens == 0) || (units == 0);
    } else{
	    return false;
	}
    
}

int main() {

	 int numbers[] = {100, 26, 39, 4003, 4032}; 

	
    for (int i = 0; i < 5; i++) {
        if(isFourNumsDifferent(numbers[i])){
            printf("це число %d 4-значне і всі цифри в ньому різні\n", numbers[i]);
        } else{
            printf("це число %d не 4-значне або різні цифри \n", numbers[i]);
        }
        if(endsWith369(numbers[i])){
            printf("це число %d закінчується на 3,6,9\n", numbers[i]);
        } else{
            printf("це число %d не закінчується на 3,6,9\n", numbers[i]);
        }
        if(hasNumZero(numbers[i])){
            printf("це число %d тризначне і в ньому є цифра 0\n", numbers[i]);
        } else{
            printf("це число %d не тризначне і в ньому є цифра 0\n", numbers[i]);
        }
        printf("\n");
    }  
    return 0;
}
