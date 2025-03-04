#include<stdio.h>
int main() {
	int num;
	long long factorial=1;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num<0){
		printf("Factorial is not defined for nrgative numbers.\n");
	}else{
		for(int i=1;i<=num;i++){
			factorialm *=i;
		}
		printf("Factorial of %d is:&d\n",num,factorial);
		return 0;
	}
}
