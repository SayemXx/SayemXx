#include<stdio.h>
int main(){
    char num[100];
    char ch;
    //  scanf("%c",&num[0]);
    //  printf("Your name is : %c ",num[0]);
    printf("Enter your name : ");
    int a;
    for(a=0;ch!='\n';a++){
        scanf("%c",&ch);
        num[a]=ch;
    }
    num[a]='\0';
    printf("Your name is : ");
    puts(num);

    return 0;
}