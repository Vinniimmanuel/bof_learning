#include<stdio.h>
void add(int a, int b){
	int sum = 0;
	sum = a+b;
	printf("sum:%d\n",sum);
}

int main()
{
	char buf[10];
	add(2,3);
	return 0;
}