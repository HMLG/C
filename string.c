#include<stdio.h>
int main(void)
{
	char test[]="good morning";
	char *taker="good afternoon";
	printf("good morning \n");
	printf("test %p\n",taker);
	printf("test %p\n",&taker);
	printf("test %p\n",&taker[0]);
}
