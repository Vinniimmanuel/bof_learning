#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	srand(time(NULL));
	i=rand() % 10;
	printf("%d\n",i);
}

