#include <stdio.h>

int main(){
	float desired;
	printf("Enter desired average: ");
	scanf("%f", &desired);
	
	float current;
	printf("What is your current average? ");
	scanf("%f", &current);
	
	float worth;	
	printf("How much is your final worth, as a percent? ");
	scanf("%f", &worth);
	
	int need; 
	need = (desired - ((100 - worth) / 100) * current) / (worth / 100);
	printf("You need %d", need);
	printf(" percent on your final to get your desired average.\n");
	return 0;
}
