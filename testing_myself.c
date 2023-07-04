#include<stdio.h>

void funct(){
	static int count=7;
	printf("\t[+] In funct : %d\n",count);
	count++;
}

int main(){
	int count = 5;
	for (int m=0; m<count; m++){
		printf("[+] In main : %d \n",count);
		funct();
}
}
