#include<stdio.h>
#include<string.h>
int main(){
	int i,mew;
	char intro_message[20];
	strcpy(intro_message,"Hello teeta :)");
	
	printf("How many times do you want to print Hello world : ");
	scanf("%d",&mew);

	for(i=0; i< mew; i++){
		printf("%3d - %s\n ",i,intro_message);
	}
}