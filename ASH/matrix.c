#include<stdio.h>
int main() {
	int rows,cols;
	printf("Enter the number of rows and columns:");
	scanf("%d %d",&rows,&cols);
	int A[rows][cols],B[rows][cols],sum[rows][cols];
	printf("Enter elements of matrix A:\n");
	for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
		scanf("%d",&A[i][j]);
	}
} 
printf("Enter elements of matrix B:\n");
for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
		scanf("%d",&B[i][j]);
	}
}
