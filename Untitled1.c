#include<stdio.h>
#include<conio.h>


void print_hello()
{
	
	printf("hello world\n");
	
}
void addition()
{
	
	int a,b,c;
	printf("\naddition of \na and b: ");
	scanf("%d %d", &a, &b);
	printf("\nanswer is %d ", a+b);
	
}


int jaddition(int a, int b) 
{
	

	//printf("\naddition of \na and b: ");
	//printf("\nanswer is %d", a+b);
	return a+b;
	
}


void main()
{
	int sum=0;
	
	
	
	sum=jaddition(3,5); 
	
	printf("\nsum is %d ", sum);
	
}


