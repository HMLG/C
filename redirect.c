#include<stdio.h>
#include<stdlib.h>
int main(){
fflush(stdout);
char test ='P';
while((scanf("%c",&test))!=EOF)
putchar(test);
printf("%c ",EOF);
fflush(stdin);
}
