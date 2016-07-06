/* Program to print helloworld */
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main()
{
	char *str;
	fgets(str,MAX,stdin);
	printf("Hello %s",str);
	return 0;
}