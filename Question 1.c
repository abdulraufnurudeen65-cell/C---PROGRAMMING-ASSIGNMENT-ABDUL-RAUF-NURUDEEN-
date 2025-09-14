#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float temp;
	int heart_rate, bp;
	
	printf("Enter body temperature (C): ");
	scanf("%f", &temp);
	printf("Enter heart rate (bpm): ");
	scanf("%d", &heart_rate);   
	printf("Enter blood pressure (mmHg): ");
	scanf("%d", &bp);
	
	printf("\nBody Temperature: %.1f C\n", temp);
	printf("Heart Rate: %d bpm\n", heart_rate);
	printf("Blood Pressure: %d mmHg\n", bp);
	
	return 0;
}
