#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* sum(int (*p)[4],int cols,int len){
	int val= 0;
	printf("%zd \n",strlen(p));
	for(int i = 0 ; i < cols ; i++)
	{
	int j = 0;
	while(j < len)
	{
		val+=*(*(p+i)+j);
		j++;
	}
	j=0;
	}
	return val;
	
}
int main(){
	int (*p)[4]=(int[][4]){{1,2,3,4},{5,6,7,8}};
	printf("%d \n",sum(p,2,4));

}
