#include<stdio.h>
int main()
{
    int strc = 5;
    int *mew;
    mew=&strc;
    printf("Address of number %d is %d \n", strc, mew);
}
