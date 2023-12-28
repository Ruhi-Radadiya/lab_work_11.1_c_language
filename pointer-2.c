//Q.2 Write a Program to swap two variables using Pointers.
//For example,
//Input:
//Enter the value of x: 5
//Enter the value of y: 3
//
//Output:
//Before swapping:
//x: 5
//y: 3
//
//After swapping:
//x: 3
//y: 5
#include<stdio.h>

void main()
{
		int a,b,c;
	int *p;
	int *q;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	p=&a;
	q=&b;
	c=*p;
	*p=*q;
	*q=c;
	
	printf("After swapping:\n");
	printf("a : %d\n",*p);
	printf("b : %d\n",*q);
}