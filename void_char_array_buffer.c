#include<stdio.h>
void return_input (void)
{
	char array[30];
	fgets (array,10,stdin);
	printf("%s\n", array);
}
int main()
{
	return_input();
	return 0;
}