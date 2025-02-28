#include<stdio.h>
int main() {
	int day;
	printf("Enter a number(1-7) for the day of the weak:");
	scanf("%d",&day);
	switch(day) {
case1:
printf("SUNDAY/n");
break;
case2:
printf("MONDAY/n");
break;
case3:
printf("TUESDAY/n");
break;
case4:
printf("WEDNESDAY/n");
break;
case5:
printf("THRUSDAY/n");
break;
case6:
printf("FRIDAY/n");
break;
case7:
printf("SATURDAY/n");
break;
deafault:
printf("invaild input please enter a number between 1 and 7./n");
	}
	return 0;
}
