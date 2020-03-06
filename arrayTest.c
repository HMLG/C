#include<stdio.h>
#include<string.h>
void main(){
	int arr[100];
	char carr[100]="1111";
	for(int i = 0 ; i < 100 ; i ++)
	{
	arr[i]=i;
	//carr[i]=i;
	}
	carr[4]="\0";
	printf("%s \n",carr);
	printf("%zd \n",sizeof(arr));
	printf("%ld \n",strlen(arr));
	printf("%zd \n",sizeof(carr));
	printf("%ld \n",strlen(carr));

}
