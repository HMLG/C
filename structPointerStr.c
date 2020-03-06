#include<stdio.h>
struct pname{
	char *fname;
	char *lname;
};

int main(){
	char test[10]="araon";
	test[2]='g';
	printf("%s ",test);
	char *died ="guoguo";
	printf("%p %s",died,died);
	//scanf('g',*died+1);
	printf("%p ",died);
}
