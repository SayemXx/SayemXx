#include<stdio.h>
int main()
{   printf("\tThis is a Prime number game.\n\t\tIf you ablen to enter 10 prime number, you will win.\n\t\t\tElse you will loss the game.\n");
    int n;
    int counta=0;
    for(int i=1;i<=10;i++){
    printf("\nEnter :");
    scanf("%d",&n);
     int count=0;
    for(int i=1;i<=1000;i++){
        if(n%i==0){
           count++;
            }}
        if(count==2){
            counta++;
        printf("%d is a prime number.",n);
        }    
        else{
        printf("%d is not a prime number.",n);
        }
    }
    if(counta==10){
        printf("\n\n\n----You are Win-----\n");
        printf("**Your Mark--(10/10)**\n\n\n");
    }
    else{
        printf("\n----You are loss----\n");
        printf("**Your Mark--(10/%d)**\n\n\n",counta);
    }
    return 0;
} 