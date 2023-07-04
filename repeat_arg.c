#include<stdio.h>
#include<stdlib.h>
void usage(char *name){
	printf("[+] Usage %s <num>\n",name);
	printf("[+] Example: %s 2",name);
	exit(1);
}

int main(int argc, char *argv[]){
	if (argc <3){
		usage(argv[0]);
	printf("[+] Repeating %d of times\n",argc);
	}
	int count=atoi(argv[argc-1]);
	printf("[+] Number of args is %d\n",argc);
	printf("Hi you asked to repeat %s %d times\n",argv[1],count);
	for (int m=0; m<count; m++){
		printf("%3d . %s\n",m,argv[1]);
	}
}
