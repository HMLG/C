#include<stdio.h>
#define MAXCAPACITY 20
void main(void){
	char line[MAXCAPACITY];
	while(fgets(line,MAXCAPACITY,stdin)!=NULL && line[0]!='\n')
		fputs(line,stdout);
	return 	0;

}
