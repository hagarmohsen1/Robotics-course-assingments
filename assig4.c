#include<stdio.h>
void main (void){
	int a,b;
	int sum,mul;
	printf("Please Enter number 1:");
	scanf("%d",&a);
	
	printf("Please Enter number 2:");
	scanf("%d",&b);
	
	sum= a+b;
	mul= a*b;

	
    printf("a+b= %d \n a*b= %d \n ",sum,mul);
}