#include<stdio.h>
void main (void){
	int a,b;
	int sum,sub,and,or,Xor;
	printf("Please Enter number a:");
	scanf("%d",&a);
	
	printf("Please Enter number b:");
	scanf("%d",&b);
	
	sum= a+b;
	sub= a-b;
	and= a&b;
	or= a|b;
	Xor= a^b;
	
    printf("a+b= %d \n a-b= %d \n a&b= %d \n a|b= %d \n a^b= %d \n",sum,sub,and,or,Xor);
	
}