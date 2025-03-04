#include<stdio.h>
int main () {
	float celsius,fahrenheit;
	printf("Enter temperature i Celsius:");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("Temperature in Fahrenheit:%.2f\n",fahrenheit);
	if (celsius<=0) {
		printf("Weather:Freezing\n");
	}else{
		if(celsius>0 &&celsius<=15)
		{
			printf("Weather:Cold\n");
		}else{
			if(celsius>15 &&celsius<=25){
				printf("Weather:Moderate\n");
			}else{
				printf("Weather:Hot\n");
			}
		}
	}
	return 0;
}
