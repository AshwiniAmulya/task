#include<stdio.h>
void func() {
	static in count=0;
	count ++;
	printf("%d",count);
}
int main() {
	for (int i=0;i<3;i++)
		func();
	return 0;
}
