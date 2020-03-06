#include<stdio.h>

void main(void){
//test the scope about the loop bracket
	int x =100;
	while(x++<103){
		printf("%d ",x);
  		int x =50;
		printf("%d ",x);			
	}
	printf("%d ",x);
/*
//test the brace 

{

int a= 100;
}

printf("%d ",a);
*/
}
