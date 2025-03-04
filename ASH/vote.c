#include<stdio.h>
int main() {
	int age;
	printf("Enter your Age:");
	scanf("%d",&age);
	if(age<0) {
		printf("Error:Age cannot be negative.\n");
	}else if(age<18) {
		printf("You are not eligible to vote.\n");
	}else{
		if(age==18){
			printf("Congratulations!This is your first time vote.\n");
		}else{
			printf("you are eligible to vote.\n");
		}
	}
	return 0;
}
