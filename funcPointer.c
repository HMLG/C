#include<stdio.h>
#include<stdlib.h>
void printFunc(void){
    printf("test \n");

}
int main(){
    void (*ptr)();
    ptr = printFunc;
    printf("%p \n",ptr);
    printf("%p \n",*ptr);
    (*ptr)();
    ptr();
}