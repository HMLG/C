#include<stdio.h>
#include<stdlib.h>
typedef struct tw taowa;
typedef struct tw{
	char *prefix;
	int suffix;
}taowa;
taowa arr[100];
void Out(int);
int main(){
    	char a[] ="taowa";
   	char b[] ="jinzhi";
   	int count=0;

	arr[0].prefix=a;
	arr[0].suffix=-1;

    	scanf("%d",&count);
    	int dis = count;
	for(int i=1;i<count;i++){
		arr[i].prefix=b;
		arr[i].suffix=i-1;
	} 

	for(int i=0;i<count;i++)
		printf("%d %s %d \n",i,arr[i].prefix,arr[i].suffix);
	putchar('\n');
	Out(count-1);
	putchar('\n');

}
void Out(int index){
	if(0==index){printf("%s ",arr[index].prefix);return;}
	//printf("printf taowao %d \n",arr[index].suffix);
	printf("%s ",arr[index].prefix);
	for(index;index>0;index--){
		//printf("%d ",index);
		Out(arr[index].suffix);
	}
}

