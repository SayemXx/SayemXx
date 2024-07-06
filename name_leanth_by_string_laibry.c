#include<stdio.h>

#include<string.h>
int main(){
    char num[100];
    printf("\nEnter your full name : ");
    fgets(num,100,stdin);
    printf("\nYour full name leanth is : %d ",strlen(num)-1);
    return 0;
}