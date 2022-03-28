#include<stdio.h>

int power(int base, int exponent);

int main(void) {
	
    int exponent, value, base;
    
    printf("\nEnter base : ");
    scanf("%d", &base);
    
    printf("\nEnter exponent: ");
    scanf("%d", &exponent);
    
    printf("\nThe power of (%d,%d) is %d", base, exponent, power(base,exponent));
    

    return 0;
}

int power(int base, int exponent) {
	
	
	if (exponent == 0){
    	
    	return 1;
	}
	
    else if (exponent != 0){
	
        return (base * power(base, exponent- 1));
        
		}
   
} 

