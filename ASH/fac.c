#include<stdio.h>
int main() {
	int num;
	long long factorial=1;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num<0){
		printf("Factorial is not defined for nrgative numbers.\n");
	}
