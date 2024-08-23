#include<stdio.h>
int sum(int a,int b){
     printf("Reasult :%d",a+b);
}
int main(){
    int a,b;
    printf("\nEnter the 1st number :");
    scanf("%d",&a);
    printf("\nEnter the 2nd  number :");
    scanf("%d",&b);
   
    sum(a,b);
return 0;
}