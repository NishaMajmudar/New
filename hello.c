#include<stdio.h>
void add(int a,int b);
void main()
{
	printf("hello\n:");
	add(25,5);
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("Addition two number %d\n",c);
}
