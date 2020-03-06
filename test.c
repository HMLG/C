#include<stdio.h>
#include<string.h>
int comp(char *check,int start,int tail,char item){
    int index=0;
    for(int i =start;i<tail;i++)
    {
        if( item == check[i])
	{
	index = i;
	return index;
	}//exist duplicate
    }
    return 9999;// no duplicate
}
int main(){
    char input[1000];
    char check[1000];
    scanf("%s",input);
    //gets(input);
    printf("%s",input);
    int len = strlen(input);
    if (0==len)return 0;
    int longest=1;
    int longer=1;
    int start=0;
    int tail =1;
    int indicator;
    check[0]=input[0];
    for(int i = 1 ; i < len;i++)
    {
       
       indicator = comp(check,start,tail,input[i]);
       printf("%d \n",indicator);
       if(9999==indicator)//no duplicate
       {
           check[tail]=input[i];
           longer++;
           if (longer > longest)longest = longer;
           tail++;
       }
       else//exist duplicate
       {
	   longer = tail - indicator;
           start = indicator;
           check[tail]=input[i];
	   tail++;
       }
           
       
    }
    printf("%d",longest);
    return longest;
}
