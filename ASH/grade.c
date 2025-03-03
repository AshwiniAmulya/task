#include<stdio.h>
int main() {
	int marks;
	printf("Enter a marks:");
	scanf("%d",&marks);
	if (marks>=0 && marks<=100) {
		if(marks>=85){
			printf("grade:A\n");
		}else if (marks>=70){
			printf("grade:B\n");
		}else if (marks>=50) {
			printf("grade:C\n");
	        }else {
			printf("grade:F\n");
		}
	}else{
		printf("invaild marks entered.\n");
	}
	return 0;
}
