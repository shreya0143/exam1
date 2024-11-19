#include <stdio.h>

int main() {
	
	float celsius, fahrenheit;
	
	printf("Enter the temperature in celsisus: ");
	scanf("%f", &celsius);
	
	fahrenheit = (9.0 / 5.0) * celsius + 32;
	
	printf("the temperature in fahrenheit: %.2f\n", fahrenheit);
	
	return 0;
}
