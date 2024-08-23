#include<stdio.h>
int main(){
    char num[100];
    printf("\nEnter your full name : ");
    fgets(num,100,stdin);
    printf("\nYour full name is : ");
    puts(num);
    return 0;
}