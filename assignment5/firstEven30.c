/*
 *PROGRAM : To print the first 30 +ve even integers
 *FILE : firstEven30.c
 *CREATED BY : Himanshu Sekhar Nayak
 *DATED : /09/2019
 */

#include<stdio.h>
int main()
{
	int i;

	for(i=1;i<=60;++i)
		if(i%2 == 0)
			printf("%d ", i);

	printf("\n");

	return 0;
}
