#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
void printer(char cast,...){
	va_list ap;
	va_start(ap,cast);
	switch(cast){
	case 'd':{printf("int %d ",(va_arg(ap,int)));}break;
	case 'f':{printf("double %f ",va_arg(ap,double));}break;
	default:break;
	}
	va_end(ap);	
}

void main(){
	char item;
	char value[10];
	int val;
	scanf("%c %s",&item,value);
	val = atoi(value);
	printer(item,val);
}
